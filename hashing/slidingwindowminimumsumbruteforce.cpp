#include <iostream>
using namespace std;
void minimumsum(int arr[],int n,int k){
    int result = INT32_MAX;
    for(int i = 0 ; i< n-k+1 ;i++){
        int sum = 0;
        for(int j = i ; j<i+k ; j++){
            sum = sum + arr[j];
           
    }
    result = min(result,sum);
  }
  cout<<result;
}
int main(){
    int arr[] = {-2,10,1,3,2,-1,4,5};
    int k = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    minimumsum(arr,n,k);
    return 0;
}