#include<bits/stdc++.h>
using namespace std;

int numberOfAlternatingGroups(vector<int>& colors, int k) {
    colors.insert(colors.end(), colors.begin(), colors.begin() + (k - 1));
    int count = 0;
    int left = 0;
    
    for (int right = 0; right < colors.size(); ++right) {
        if (right > 0 && colors[right] == colors[right - 1]) {
            left = right;  
        }
        
        if (right - left + 1 >= k) {
            count++;  
        }
    }
    
    return count;
}

int main(){
    vector<int> colors = {0,1,0,0,1,0,1,1,0,1};
    int k = 6;
    cout<<numberOfAlternatingGroups(colors, k) ;
    return 0;
}