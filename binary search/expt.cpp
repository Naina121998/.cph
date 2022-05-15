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

int maxperfectnumber(int arr[],int n , int k){
    int ans = 0;int sum = 0;int i;
    for( i = 0 ; i< k ; i++){
        if(perfectnumbers(arr[i])){
            sum++;
        } 
    }
    ans = sum;
    for(;i<n;i++){
        if(perfectnumbers(arr[i])){
            sum++;
        }
        if(perfectnumbers(arr[i-k])){
            sum--;
        }
        ans = max(ans,sum);
    }
    return ans;
}
int main()
{
   int arr[] = { 28, 2, 3, 6, 496, 99, 8128, 24 };
    int K = 4;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    cout << maxperfectnumber(arr, N, K);
 
    return 0;
}