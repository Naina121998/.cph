#include <iostream>
using namespace std;
void towerOfHanoi(int n,char fromrod, char torod, char auxrod){
    if(n==1){
        cout<<"movedisk1from"<< fromrod << "to"<< torod<<endl;
        return;
    }
    towerOfHanoi(n-1,fromrod,auxrod,torod);
    cout<< "movedisk"<<n<<"from"<<fromrod<<" to"<<torod<<endl;
    towerOfHanoi(n-1,auxrod,torod,fromrod);
}
int main()
{
    int n = 2; // Number of disks
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}