#include <bits/stdc++.h>
using namespace std;
#define n1 4
#define n2 4
#define n3 4
void multiply(int arr1[n1][n2],int arr2[n2][n3],int res[n1][n3]){
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            res[i][j]=0;
            for(int k=0;k<n2;k++){
                res[i][j]+=arr1[i][k]*arr2[k][i];
            }
        }
    }

}

int main(){
    int i, j;
    int res[n1][n3]; // To store result
   
    int mat1[n1][n2] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    int mat2[n2][n3] = { { 1, 1, 1, 1 },
                       { 2, 2, 2, 2 },
                       { 3, 3, 3, 3 },
                       { 4, 4, 4, 4 } };
 
    multiply(mat1, mat2, res);
 
    cout << "Result matrix is \n";
    for (i = 0; i < n1; i++) {
        for (j = 0; j < n3; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
 
    return 0;
   
}
//time complexity = o(s+t);