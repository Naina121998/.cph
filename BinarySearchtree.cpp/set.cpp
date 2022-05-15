#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    
   
  multiset <int, greater<int>> s;
   s.insert(6);
   s.insert(4);
  
   s.insert(0);
   s.insert(1);
   s.insert(6);
   s.erase(s.find(6));
   
   multiset <int> :: iterator it;
  cout << (*s.upper_bound(4));
    
    return 0;
}