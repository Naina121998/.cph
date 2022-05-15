#include <iostream>
#include <vector> 
using namespace std;
int longestUniqueSubsttr(string s){
    int start = -1;
    vector <int> dict(256,-1); 
    int maxlen=0;
    for(int i =0;i<s.size();i++){
        if(dict[s[i]]> start){
            start = dict[s[i]];
        }
        dict[s[i]] = i;
        maxlen = max(maxlen,i - start);
    }
    return maxlen;
}
int main()
{
    string str = "geeks";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}