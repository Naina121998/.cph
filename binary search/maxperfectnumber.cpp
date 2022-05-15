#include <iostream>
#include <cmath>
using namespace std;
bool perfectnumbers(int n){
    int sum = 1;
    for(int i = 2 ; i<= sqrt(n);i++){
        if(n % i == 0){
            if(i == n/i){
                sum += i;
            } else {
                sum += i + n/i;
            }
        }
    }
    if(sum == n && n != 1){
        return true;
    } else {
        return false;
    }
}
int maxsum(int arr[],int n ,int k){
    if(n < k){
        return -1;
    }
    int sum = 0; int ans ;
        for(int i = 0; i< k ; i++){
            sum += arr[i];
        }
    ans = sum ; 
    for(int i = k ; i< n ;i++){
        ans = ans + arr[i] - arr[i - k ];
       sum = max(ans, sum);
    }
    return sum;
}
int maxperfectnumber(int arr[],int n , int k){
    for(int i = 0 ; i< n ; i++){
        if(perfectnumbers(arr[i])){
            arr[i] = 1;
        } else {
            arr[i]= 0;
        }
    }
    return maxsum(arr,n,k);
}
int main()
{
    int arr[] =  {1, 2, 3, 6};
    int K = 2;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    cout << maxperfectnumber(arr, N, K);
 
    return 0;
}