#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void findCombinations(vector<vector<char>> keypad,int input[],string res , int index )
{
  if(index ==-1){
    cout<<res<<" ";
    return;
  }
  int digit = input[index];
 int len = keypad[digit].size();
 for(int i = 0 ; i< len;i++){
     findCombinations(keypad,input,keypad[digit][i] + res,index-1);
 }
  
 
}
 
// Driver Code
int main()
{
    // Given mobile keypad
   vector<vector<char>> keypad =
    {
        {}, {},        // 0 and 1 digit don't have any characters associated
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
 
    // Given input array
    int input[] = { 2, 3 };
   
    // Size of the array
    int n = sizeof(input)/sizeof(input[0]);
 
    // Function call to find all combinations
    findCombinations(keypad, input, "", n - 1);
 
    return 0;
}