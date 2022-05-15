#include <iostream>
#include <vector>
using namespace std;
void countFreq(int arr[],int n){
    
    vector <bool> s(n,false);
    for(int i = 0 ; i<n;i++){
        int count = 1;
        if(s[i]==true){
            continue;
        }
        for(int j = i + 1 ; j<n;j++){
            if(arr[i]==arr[j]){
                s[j]=true;
                count++;
            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}
int main()
{
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}