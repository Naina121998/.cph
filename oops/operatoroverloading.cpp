#include <bits/stdc++.h>
using namespace std;
class Complex{
    public:
    int real;int imag;

    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return res;
    }
    void print(){
        cout<<real<<" "<<imag<<endl;
    }
};

int main(){
   
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2;
    c3.print(); 
    return 0;
}
