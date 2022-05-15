#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 1234;string count = "";
    while(n>0){
        int m = n%10;
        count = count + to_string(m);
        n = n/10;
    }
    cout <<stoi(count)<<endl;
    return 0;
}