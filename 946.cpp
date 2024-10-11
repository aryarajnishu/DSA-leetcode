// class Solution {
// public:
//     bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

//         int n = pushed.size();
//         stack<int> s;
//         int x =0;
//         for(int i=0 ; i<n ; i++){
//             s.push(pushed[i]);
//             if(s.top() == popped[x]){
//                 s.pop();
//                 x++;
//             }
//         }
//         while(s.top() == popped[x]){
//                 s.pop();
//                 x++;
//         }
//         if(s.empty()){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };