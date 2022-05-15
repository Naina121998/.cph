#include <iostream>
#include <vector>
using namespace std;
void printSubArrays(vector <int> arr,int start,int end,int k){
    int s = 0;
  for(int i = 0 ; i<arr.size();i++){
       s = s + arr[i];
  }
  if(k<=s){
        if(end == arr.size()){
            return;
        }
        else if(start>end){
            printSubArrays(arr,0,end+1,k);
        }
        else{
             int sum = 0 ;
            for(int i = start;i<end;i++){
               sum = sum + arr[i];
                
            }
            sum = sum + arr[end];
          
            if(sum==k){
              
              for(int i = start;i<=end;i++){
                   cout<<arr[i]<< " ";
                 
               }
            
               cout<<endl;
            }
           
            printSubArrays(arr,start+1,end,k);

        }
    }
        
       
}
int main()
{
   vector<int> arr = {3,1, 2,3, 3,4,5};
   int k = 6;
   printSubArrays(arr, 0, 0, k);
   return 0;
}