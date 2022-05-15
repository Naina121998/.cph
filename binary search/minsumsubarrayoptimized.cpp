#include <iostream>
using namespace std;
int minsumsubarray(int arr[],int n,int x){
    int start = 0 ; int end = 0;int minlength = n + 1;
    int sum = 0;
    while(end < n){
        while(end < n && sum <= x){
            sum = sum + arr[end++];
        }
        while (start < n && sum > x){
            if(end - start < minlength){
                minlength = end - start;
            }
            sum -= arr[start++];
        }
    }
    return minlength;
}
int main(){
  int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int x  = 280;
   
    cout << minsumsubarray(arr3,n3,x);
    return 0;
}