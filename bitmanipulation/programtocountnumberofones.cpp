#include <bits/stdc++.h>
using namespace std;
int noofones(int n){
    int count =0;
    while(n!=0){
        n = n & (n-1);
        count++;
    }
    return count;
}
int main(){
    cout<<noofones(21);
    return 0;
}