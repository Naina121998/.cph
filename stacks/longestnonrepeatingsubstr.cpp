#include <iostream>
#include <vector>
using namespace std;

int longestUniqueSubsttr(string s){
   int n = s.length();
   int i =0;int res = INT16_MIN;
   vector<int> arr(256,-1);
   for(int j=0;j<n;j++){
       i = max(i,arr[s[j]]+1);
       res = max(res,j-i+1);
       arr[s[j]]=j;
   }
   return res;
}
int main()
{
    string str = "jjjjjj";
    cout << "The input string is " << str << endl;
    int len = longestUniqueSubsttr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len;
    return 0;
}