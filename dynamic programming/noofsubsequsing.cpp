#include <bits/stdc++.h>
using namespace std;
int count(string s){
    int e = 1,a=0,ab=0,abc=0;
    for(int i = 0 ;i<s.length();i++){
        if(s[i] == 'a'){
            a = a + e;
        }
        else if(s[i] == 'b'){
            ab = ab + a;
        }
        else if(s[i] == 'c'){
            abc = abc + ab;
        }
        else if(s[i]=='?'){
            abc = 3*abc + ab;
            ab = 3*ab + a;
            a = 3* a + e;
        }
    }
    return abc;
}
int main(){
    string s = "dab???";
    cout<<count(s);
    return 0;
}