int hexadecimaltodecimal(string s){
    int ans = 0 ; int x = 0;
    for(int i= s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            ans = ans + pow(16,x)* s[i];
        }else if(s[i]>='A' && s[i]<='F'){
            ans = ans + pow(16,x)* (s[i]-'A' + 10);
        }
      x = x+1;
    }
      return ans;
}