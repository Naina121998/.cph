#include <bits/stdc++.h>
using namespace std;
bool issubset(int arr[],int n,int sum){
     if(n==0){
        return 0;
    }
    if(sum==0){
        return 1;
    }
    if(arr[n-1]>sum){
        return issubset(arr,n-1,sum);
    }
    if(arr[n-1]<=sum){
        return issubset(arr,n-1,sum) || issubset(arr,n-1,sum-arr[n-1]);
    }
}
int main()
{
    int set[] = { 3, 34,  12, 5, 2 };
    int sum = 9;
    int n = sizeof(set) / sizeof(set[0]);
    if (issubset(set, n, sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}