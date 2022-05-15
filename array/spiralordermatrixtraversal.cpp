#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6
 
vector<int> spiralPrint(int m, int n, int arr[R][C])
{
    vector<int> ans;
    int i ; int k = 0 ,l = 0 ;
    while(k<m && l<n){
        for(i=l ;i<n;i++){
            ans.push_back(arr[k][i]);
        }
        k++;
        for(i=k ;i<m;i++){
            ans.push_back(arr[i][n-1]);
        }
        n--;
        if(k<m) {

        for(i=n-1;i>=l;i--){
         ans.push_back(arr[m-1][i]);
        }
        m--;
        }
        if(l<n){
        for(i = m-1 ;i>=k;i--){
            ans.push_back(arr[i][l]);{}
        }
        l++;
        }
    }
    return ans;
}
 
/* Driver Code */
int main()
{
    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
 
    
    vector<int> ans = spiralPrint(R, C, a);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}