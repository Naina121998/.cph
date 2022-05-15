#include <iostream>
using namespace std;
bool palindrome(int arr[],int i,int j){
    while(i < j){
        if(arr[i]!=arr[j]){
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}
int palindromesubarray(int arr[],int n ,int k){
    for(int i = 0 ; i<= n - k ; i++){
        if(palindrome(arr,i,i+k-1)){
            return i ;
        }
    }
    return -1;
}
int main(){
    int arr[] =  {2,3,5,1,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int ans = palindromesubarray(arr,n, k);
  
    if (ans == -1)
  
        cout << -1 << "\n";
  
    else {
        for (int i = ans; i < ans + k;
             i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}