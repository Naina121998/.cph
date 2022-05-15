#include <bits/stdc++.h>
using namespace std;
void findTriplets(int arr[],int n,int k){
    int l = 0 ; int r = n-1;sort(arr,arr+n); bool found = false;
    for(int i = 0 ; i<n-1;i++){
      int l = i + 1 ;r = n-1;
            while (l<r)
            {
                if(arr[l]+ arr[r]+arr[i]==k){
                    cout<<arr[l]<<" "<<arr[r]<<" "<<arr[i]<<endl;
                    found = true;
                    break;
                }else if((arr[l]+ arr[r]+arr[i]<k)){
                    l++;
                } else{
                    r--;
                }
            }
            
        }
          if(found==false){
        cout<<"no sum exist"<<endl;
    }
 }
  

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 0;
    findTriplets(arr, n,k);
    return 0;
}