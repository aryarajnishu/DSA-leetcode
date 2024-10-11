#include<bits/stdc++.h>
using namespace std;

int solve(string s1 , string s2){
    string h1 = "";
    h1.push_back(s1[0]);
    h1.push_back(s1[1]);

    string h2 = "";
    h2.push_back(s2[0]);
    h2.push_back(s2[1]);

    string m1 = "";
    m1.push_back(s1[3]);
    m1.push_back(s1[4]);

    string m2 = "";
    m2.push_back(s2[3]);
    m2.push_back(s2[4]);

    // cout<<h1<<" "<<m1<<" "<<h2<<" "<<m2<<endl;

    int hour1 = atoi(h1.c_str()) , hour2 = atoi(h2.c_str()) , min1 = atoi(m1.c_str()) , min2 = atoi(m2.c_str());

    // cout<<hour1<<" "<<min1<<" "<<hour1<<" "<<min2<<endl;

    int timediff ;
    if(min1 < min2){
        timediff = (min1 + 60 - min2) + (hour1-hour2-1)*60;
    }
    else{
        timediff = (min1 - min2) + (hour1-hour2)*60;
    }

    // cout<<"time difference is :- "<<(timediff)<<endl;

    return min(timediff , (1440 - timediff));
}

int main(){
    vector<string> time = {"23:19","00:56"};
    cout<<solve(time[0] , time[1]);
}