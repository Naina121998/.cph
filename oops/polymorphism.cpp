#include <iostream>
using namespace std;

class animal{
    int a,b;
      public:
      void sound(){
          cout<<"meowmeow"<<endl;
      }
      void num(int val){
          a = val;
          cout << a<<endl;
      }
      void num(int val1,int val2){
         a= val1;
         b= val2;
         cout<<a<<" "<<b<<endl;
      }
};


int main(){
     animal d;
     d.num(3);
     d.num(4,5);
    return 0;
}