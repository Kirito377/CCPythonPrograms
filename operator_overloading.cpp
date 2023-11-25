#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public :
        Complex(){
            real =0;
            imag =0;
        }
        Complex(int a,int b){
            real = a;
            imag = b;
        }
        Complex operator*(Complex &a){
            Complex res;
            res.imag = imag*a.imag;
            res.real = real*a.real;
            return res;
        }
        Complex operator+(Complex &a){
            Complex res;
            res.imag = imag+a.imag;
            res.real = real+a.real;
            return res;
        }
        void print(){
            cout << "Real = "<< real <<" Imaginary = " << imag << endl;
        }
};

int main(){
    Complex c1(10,12),c2(1,2),c4(9,23),c3;
    c3 = c1*c2+c4;
    c3.print();
    return 0;
}