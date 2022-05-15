#include <iostream>
#include <vector>
using namespace std;
void printSubArrays(vector <int> arr,int start,int end){
        if(end == arr.size()){
            return;
        }
        else if(start>end){
            printSubArrays(arr,0,end+1);
        }
        else{
            for(int i = start;i<end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<arr[end]<<" ";
            cout<<endl;
            printSubArrays(arr,start+1,end);

        }
}
int main()
{
   vector<int> arr = {1, 2, 3};
   printSubArrays(arr, 0, 0);
   return 0;
}