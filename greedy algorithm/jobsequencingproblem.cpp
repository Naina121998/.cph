#include <bits/stdc++.h>
using namespace std;
struct job {
    char id;
    int dead;
    int profit;
};
bool compare(job arr1,job arr2){
    return arr1.profit > arr2.profit;
}
void  printJobScheduling(job arr[],int n){
    sort(arr,arr+n,compare);
    int result[n];
    bool slot[n];
    for(int i = 0 ; i<n;i++){
        slot[i]= false;
    }
    for(int i = 0 ;i<n ; i++){
         for(int j = min(n,arr[i].dead)-1;j>=0;j--){
                if(slot[j]==false){
                    slot[j]=true;
                    result[j]=i;
                    break;
                }
        }

    }
    for(int i = 0 ; i<n ; i++){
        if(slot[i]){
            cout<<arr[result[i]].id<<" ";
        }
    }
}
int main()
{
    job arr[] = { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
                   {'d', 1, 25}, {'e', 3, 15}};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs \n";
   
    // Function call
    printJobScheduling(arr, n);
    return 0;
}