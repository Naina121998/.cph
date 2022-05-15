#include <bits/stdc++.h>
using namespace std;
    int findPeakElement(vector<int>& arr) {
        int n =arr.size();
        int l =0; int r = n-1;
        while(l<=r){
            int mid = (l+r)/2;
            if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])){
                return mid;
            }else if(mid>0 && arr[mid]<arr[mid-1]){
                 r = mid-1;
            }else{
                l = mid+1;
            }
        }
        return -1;
    }
int main()
{
    vector<int>arr = { 1,1,1,1,1,1};
   
    cout << "Index of a peak point is "
         << findPeakElement(arr);
    return 0;
}