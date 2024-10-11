// #include <bits/stdc++.h>
// using namespace std;

// pair<int,int> parti(pair<int,int> point , unordered_map<int,int> &direction , vector<vector<int>> obstacles){
//     if(direction[0] == 1){
//         // for(int i=0 ; i<obstacles.size() ; i++){

//         // }
//     }
//     else if(direction[1] == 1){
         
//     }
//     else if(direction[2] == 1){
         
//     }
//     else{
         
//     }
// }

// int main(){
//     vector<int> commands = {6,-1,-1 ,6};
//     vector<vector<int>> obstacles = {{2,4}};


//     unordered_map<int,int> direction;
//     direction[0] = 1;

//     int x =0,y=0;
//     int n = commands.size();
//     int dis = 0;
//     int turn = 1;

//     for(int i=0 ; i<n ; i++){
//         if(commands[i] != -1 && commands[i] != -2){
//             if(direction[0] == 1){
//                 //north
//                 y = y + commands[i];
//                 dis = max(dis , ((x*x) + (y*y)));
//             }
//             else if(direction[1] == 1){
//                 //east
//                 x = x + commands[i];
//                 dis = max(dis , ((x*x) + (y*y)));
//             }
//             else if(direction[2] == 1){
//                 // south
//                 y = y - commands[i];
//                 dis = max(dis , ((x*x) + (y*y)));
//             }
//             else{
//                 // west
//                 x =  x - commands[i];
//                 dis = max(dis , ((x*x) + (y*y)));
//             }
//         }
//         else{
//             if(turn){
//                 if(commands[i] == -1){                    
//                     direction[1] = 1;
//                     direction[2] = 0;
//                     direction[3] = 0;
//                     direction[0] = 0;

//                 }else{
//                     direction[1] = 0;
//                     direction[2] = 0;
//                     direction[0] = 0;
//                     direction[3] = 1;
//                 }
//                 turn = 0;
//             }
//             else{
//                 if(commands[i] == -1){
//                     direction[1] = 0;
//                     direction[2] = 1;
//                     direction[3] = 0;
//                     direction[0] = 0;
//                 }else{
//                     direction[2] = 0;
//                     direction[0] = 1;
//                     direction[1] = 0;
//                     direction[3] = 0;
//                 }
//                 turn = 1;
//             }
//         }
//     }
//     cout<<"ans is : - "<<x<<" "<<y<<endl;
//     cout<<"max dis is : - "<<dis<<endl;

// }