#include <iostream>
using namespace std;
int arraySortedOrNot(int arr[],int n){
    if(n==0 || n==1){
        return 1;
    }
    for(int i = 1;i<n ; i++){
        if(arr[i-1]>arr[i]){
            return 0;
        }
    }
return 1;
}
int main()
{
    int arr[] = { 20, 23, 23, 45, 78, 88 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (arraySortedOrNot(arr, n))
        cout << "Yes\n";
    else
        cout << "No\n";
}