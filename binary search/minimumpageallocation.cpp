#include <iostream>
#include <climits>
using namespace std;
bool ispossible(int arr[],int m,int n,int min){
    int requiredstudent = 1; int sum = 0;
    for(int i =0;i<n;i++){
        if(arr[i]>min){
            return false;
        }
        if(sum + arr[i]> min){
            requiredstudent ++;
            sum = arr[i];
        } else {
            sum += arr[i];
        }
        if(requiredstudent>m){
            return false;
        }
    }
    return true;
}
int minimumpageallocation(int arr[],int m, int n){
    if(m>n){
        return -1;
    }
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int start = 0; int end = sum;int result = INT32_MAX;
    while(start <=end){
        int mid = (start+end)/2;
        if(ispossible(arr,m,n,mid)){
            result = min(result,mid);
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}
int main()
{

    int arr[] = {12,34,67 };
    int n = sizeof arr / sizeof arr[0];
    int m = 3;
 
    cout << "Minimum number of pages = "
         << minimumpageallocation(arr, m,n) << endl;
    return 0;
}