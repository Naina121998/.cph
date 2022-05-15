#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void ksortedarray(int arr[],int k , int n){
    if(k>n){
        cout<<"k is greater than n";
    }
    int size;
   size = (n==k) ? k : k+1;
    priority_queue <int , vector<int>, greater<int>> s(arr,arr+size);
    int index = 0;
 
    for(int i = k + 1;i<n;i++){
        arr[index++] = s.top();
        s.pop();
        s.push(arr[i]);
    }
    while(!s.empty()){
        arr[index++]=s.top();
        s.pop();
    }
    
}
void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int k = 2;
    int arr[] = { 12, 3, 5, 7, 19 };
    int n = sizeof(arr) / sizeof(arr[0]);
    ksortedarray(arr, k,n);
    cout<<endl;
    cout << "Following is sorted array" << endl;
    printarray(arr, n);
 
    return 0;
}