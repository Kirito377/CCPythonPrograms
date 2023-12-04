#include<iostream>
using namespace std;
class base{
    public: 
    void show(){
        cout << "Base calss ";
    }
};
class derived: public base{
    public:
    int a=0;
    void display(){
        show();
        cout << "Derived class";
    }
};

int main(){
    derived d1;
    d1.display();
    return 0;
}