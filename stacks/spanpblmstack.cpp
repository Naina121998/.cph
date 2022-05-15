#include <iostream>
#include <stack>
using namespace std;
void span(int arr[],int n,int s[]){
    stack <int> st;
    st.push(0);
    s[0]=1;
    for(int i =1;i<n;i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        s[i] = (st.empty()) ? (i + 1) :( i - st.top());
        st.push(i);
    }


}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(price) / sizeof(price[0]);
    int S[n];
 
    // Fill the span values in array S[]
    span(price, n, S);
 
    // print the calculated span values
    printArray(S, n);
 
    return 0;
}