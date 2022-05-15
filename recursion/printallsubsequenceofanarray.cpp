#include <bits/stdc++.h>
using namespace std;
void printarr(vector<int> subarr){
    for(int i = 0 ; i<subarr.size();i++){
        cout<<subarr[i]<<" ";

    }
    cout<<endl;
}
void printSubsequences(vector<int>arr,int index,vector<int> subarr){
    if(index==arr.size()){
        int l = subarr.size();
        if(l!=0){
            printarr(subarr);
        }
        return;
    }
        printSubsequences(arr,index+1,subarr);
        subarr.push_back(arr[index]);
        printSubsequences(arr,index+1,subarr);
   

}
int main()
{
    vector<int> arr{1, 2, 3};
    vector<int> b;
  
    printSubsequences(arr, 0, b);
  
    return 0;
}
  