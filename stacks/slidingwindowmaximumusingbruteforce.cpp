#include <iostream>

using namespace std;
void sliding(int arr[],int n , int k){
    for(int i = 0 ; i<=n-k;i++){
        int max = arr[i];
        for(int j = 1; j<k;j++){
            if(arr[i+j]>max){
                max = arr[i+j];
            }
         
        }
           cout<<max<<" ";
    }
}
int main(){
     int arr[] = { 12, 1, 78, 90, 57, 89, 56 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    sliding(arr, n, k);
   
    return 0;
}