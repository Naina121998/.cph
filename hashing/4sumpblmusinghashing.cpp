#include <bits/stdc++.h>
using namespace std;
void findFourElements(int arr[],int n , int x){
    unordered_map<int ,pair<int,int>> s;
    for(int  i = 0 ; i<n-1;i++){
        for(int j = i +1;j<n ; j++){
             s[arr[i]+ arr[j]]= {i,j};
        }
        
        for(int i = 0 ; i<n-1;i++){
            for(int j = i+1 ; j<n ; j++){
                int sum = arr[i]+arr[j];
          
            int k = x - sum; 
            if(s.find(k)!= s.end()){
                pair <int,int>p = s[k];
                if(p.first != i && p.first != j && p.second != i && p.second != j){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p.first]<<" "<<arr[p.second]<<endl;
                   
                }
            }
         }
        }
    }
}
int main()
{
    int arr[] = { 10, 20, 30, 40, 1, 2 ,68};
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 91;
    
    
    findFourElements(arr, n, X);
    return 0;
}