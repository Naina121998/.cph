#include <iostream>
using namespace std;
int minsumarray(int arr[],int n,int x){
    int currsum = 0; int minlength = n + 1;
    for(int i =0 ;i<n;i++){
       currsum = arr[i];
       for(int j = i+1;j<n;j++){
           currsum += arr[j];
           if(currsum > x && j - i + 1 < minlength){
               minlength = j - i + 1;
           } 
       }
    }
    return minlength;
}
int main(){
    int arr3[] = {1, 11, 100, 1, 0, 200, 3, 2, 1, 250};
    int n3 = sizeof(arr3)/sizeof(arr3[0]);
    int x  = 280;
   
    cout << minsumarray(arr3,n3,x);
    return 0;
}