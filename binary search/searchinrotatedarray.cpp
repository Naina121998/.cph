#include <iostream>
using namespace std;
int rotatedidx(int arr[],int l, int h,int key){
    if(l>h){
        return -1;
    }
    int mid = (l+h)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[l]<=arr[mid]){
        if(arr[l]<=key && arr[mid]>=key){
           return rotatedidx(arr,l,mid-1,key);
        } else{
           return rotatedidx(arr,mid+1,h,key);
        }
    } else {
        if(arr[mid]<=key && arr[h]>=key){
            return rotatedidx(arr,mid+1,h,key);
        } 
        return rotatedidx(arr,l,mid-1,key);
    }
}
int main()
{
    int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 20;
    int i = rotatedidx(arr, 0, n - 1, key);
 
    if (i != -1)
        cout << "Index: " << i << endl;
    else
        cout << "Key not found";

    return 0;
}