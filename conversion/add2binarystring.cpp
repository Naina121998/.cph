#include <bits/stdc++.h>
using namespace std;
string addBinary(string a,string b){
    string s = "";
    int i = a.size()-1;
    int j = b.size()-1;
    int carry = 0;
    while(i>=0 || j>=0 || carry){
        int sum = carry;
        if(i>=0){
         sum += a[i] - '0';
        }
        if(j>=0){
            sum += b[j] - '0';
        }
        s += (sum%2 + '0');
        carry  = sum/2;
        i--;
        j--;
    }
     reverse(s.begin(),s.end());
     return s;
}

int main(){
   string a = "10101", b="11010";
    cout << addBinary(a, b) << endl;
    return 0;
}