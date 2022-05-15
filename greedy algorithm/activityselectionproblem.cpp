#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define n 6

bool compare(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}
void count(vector<pair<int,int>> s){
    sort(s.begin(),s.end(),compare);
    int i = 0;int count = 1;
    cout<<s[i].first <<" "<<s[i].second<<endl;
    for(int j = 1 ; j<n;j++){

        if(s[i].second <= s[j].first){
        cout<<s[j].first <<" "<<s[j].second<<endl;
        count ++;

        i = j;
        }
    }
    
    cout<<count<<endl;

}
int main(){
    vector <pair<int,int>> s={{5, 9}, {1, 2}, {3, 4}, {0, 6},
                                       {5, 7}, {8, 9}};;
  
        count(s);

    
    return 0;
}