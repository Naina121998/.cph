#include <iostream>
#include <vector>
using namespace std;
void findSubArray(vector <int> arr,int k){
    int currsum = 0; int n = arr.size(); pair <int ,int> ans;
    int i;
  for( i = 0;i<k;i++){
      currsum += arr[i];
  }
  bool flag = false;
  if(currsum % 3 == 0){
     ans = make_pair(0,k-1);
     flag = true;
  }
  for(int j = k ; j< n ;j++){
      if(flag){
          break;
      }
      currsum = currsum + arr[j] - arr[j-k];
      if(currsum %3==0){
          ans = make_pair(j-k+1,j);
          flag = true;
      }
  }
  if(flag==false){
      ans = make_pair(-1,0);
  }
  if(ans.first==-1){
      cout<<"no subarray exist";
  } else {
      for(int i = ans.first;i<=ans.second;i++){
          cout<<arr[i]<<" ";
      }
  }
}
int main()
{
    // Given array and K
    vector<int> arr = { 8, 3, 45,
                        61, 55, 80 };
    int K = 3;
 
    // Function Call
    findSubArray(arr, K);
 
    return 0;
}