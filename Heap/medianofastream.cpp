#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
void medianfind(double arr[],int n){
    priority_queue <double> s;
    priority_queue <double,vector <double>, greater<double>> g;
    double med = arr[0];
    s.push(arr[0]);
    cout<<med<<" ";
    // case 1
    for(int i = 1;i<n;i++){
    if(s.size()>g.size()){
        if(med > arr[i] ){
            g.push(s.top());
            s.pop();
            s.push(arr[i]);
        } else {
            g.push(arr[i]);
        }
        med = (s.top()+g.top())/2;
     }
     //case 2
     else if(s.size()==g.size()){
         if(med < arr[i]){
             g.push(arr[i]);
             med = g.top();
         } else {
             s.push(arr[i]);
             med = s.top();
         }
     }
     //case 3
     else{
         if(med < arr[i]){
             s.push(g.top());
             g.pop();
             g.push(arr[i]);
         } else {
             s.push(arr[i]);
         }
         med = (s.top()+g.top())/2;
     }
     cout<<med<<" ";
     
    }
    

}
int main(){
    double arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    medianfind(arr, n);
    return 0;
}