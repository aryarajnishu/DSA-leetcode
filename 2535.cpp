#include<iostream>
using namespace std;
int differenceOfSum(int nums[], int n) {

        int s1=0, s2 = 0;
        int x;
        for(int i=0 ; i<n ; i++){
            s1 = s1 + nums[i];
            x = nums[i];
            if(x > 9){
                while(x!=0){
                    s2 = s2 + x%10;
                    x = x/10;
                }
            }
            else{
                s2 = s2 + x;
            }
        }
        return (s1-s2);
        
}
int main(){
    int nums[4] = {1,5,6,3};
    cout<<differenceOfSum(nums,4);
}