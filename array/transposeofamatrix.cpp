#include <bits/stdc++.h>
using namespace std;
#define N 4
  vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int n = arr[0].size();
        int m = arr.size();
        vector<vector<int>>ans(n,vector<int>(m,0));
         for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
              ans[i][j]= arr[j][i];
           }
       }
        return ans;
        
    }
int main(){
     vector<vector<int>>A = { {1, 1, 1, 1},
                    {2, 2, 2, 2},
                    {3, 3, 3, 3},
                    {4, 4, 4, 4}};
 
    vector<vector<int>>ans= transpose(A);
 
    printf("Modified matrix is \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
           printf("%d ", ans[i][j]);
        printf("\n");
    }
 
    return 0;
   
}
//time complexity = o(s+t);