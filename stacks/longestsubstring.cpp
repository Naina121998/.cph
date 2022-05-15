#include <iostream>
#include <vector>
using namespace std;
bool distinct(string s,int i,int j){
    vector <bool> visited(26);
    for(int k = i;k<=j;k++){
        if(visited[s[k]-'a']==true){
            return false;
        }
        visited[s[k]-'a']=true;
    }
    return true;
}
int longestUniqueSubsttr(string s){
    int res = 0;
    for(int i =0;i<s.size() ; i++){
        for(int j = i;j<s.size();j++){
            if(distinct(s,i,j)){
                res = max(res,j-i+1);
            }
        }
    }
    return res;
}
int main()
{
    string str = "geeksforgeeks";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}