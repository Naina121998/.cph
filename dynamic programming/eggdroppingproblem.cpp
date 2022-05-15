#include <bits/stdc++.h>
using namespace std;
 
// A utility function to get
// maximum of two integers
int dp[1000][1000];
// Function to get minimum
// number of trials needed in worst
// case with n eggs and k floors
int eggDrop(int n, int k)
{
    // If there are no floors,
    // then no trials needed.
    // OR if there is one floor,
    // one trial needed.
    if (k == 1 || k == 0)
        return k;
 
    // We need k trials for one
    // egg and k floors
    if (n == 1)
        return k;

    if(dp[n][k]!=-1){
        return dp[n][k];
    }
    int mint = INT_MAX, x, res;

    for (x = 1; x <= k; x++) {
        res = max(
            eggDrop(n - 1, x - 1),
            eggDrop(n, k - x));
       mint = min(res,mint);
    }
 
    return dp[n][k]= mint + 1;
}
 
// Driver program to test
// to pront printDups
int main()
{
    int n = 2, k = 36;
    memset(dp,-1,sizeof(dp));
    cout << "Minimum number of trials "
            "in worst case with "
         << n << " eggs and " << k
         << " floors is "
         << eggDrop(n, k) << endl;
    return 0;
}
 