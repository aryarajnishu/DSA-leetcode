#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        int sr = rStart , sc = cStart , er = rStart  , ec = cStart;
        int total =rows*cols;
        int count = 1;
        int index = 0;

        vector<vector<int>> matrix(total, vector<int>(2, 0));
        while(count<=total){
            for(int i=sc ;count<=total && i<=ec ; i++){
                matrix[index++][0] = sr;
                matrix[index++][1] = i;
            }
            ec+2 ;
            for(int i=sr ;count<=total && i<=er ; i++){
                matrix[index++][0] = i;
                matrix[index++][1] = sc;
            }
            ec--;
            for(int i=ec ;count<=total && i>=sc ; i--){
                matrix[index++][0] = sr;
                matrix[index++][1] = i;
            }
            er--;
            for(int i=er ;count<total && i>=sr ; i--){
                matrix[index++][0] = i;
                matrix[index++][1] = ec;
            }
            sc++;
        }
        return matrix;
}

int main(){
    vector<vector<int>> ans = spiralMatrixIII(3,3,1,1);

    for(int i=0 ; i<ans.size() ; i++){
        cout<<ans[i][0]<<" "<<ans[i][0]<<endl;
    }
}