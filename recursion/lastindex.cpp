 #include <iostream>
using namespace std;
int printnumbers(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int a = printnumbers(arr, n , i + 1, key);
    if(a!=-1){
        return a;
    }
   if(arr[i]==key){
      return i;
   }
   return -1;
}
int main()
{
   int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
    int n = sizeof(arr) / sizeof(int);
 
    int x = 2;
  cout<< printnumbers(arr,n,0,x);
}