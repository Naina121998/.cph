#include <iostream>
using namespace std;
 
// Function that returns the total number of
// refills made to reach the destination of N km
int countRefill(int N, int K, int M, int compulsory[])
{
    int distcovered = 0 ;int i =0;int count = 0 ;
    while(distcovered<N){
        if(i<M && compulsory[i]<=distcovered+K){
            distcovered=compulsory[i];
            i++;
        }else{
            distcovered+=K;
        }
        if(distcovered<N){
            count++;
        }
    }
    return count;
}
 
// Driver Code
int main()
{
    int N = 10;
    int K = 2;
    int M = 3;
    // compulsory petrol pumps to refill at
    int compulsory[] = { 6, 7, 8 };
 
    // function call that returns the answer to the problem
    cout << countRefill(N, K, M, compulsory) << endl;
    return 0;
}