#include<iostream>
using namespace std;
class a{
    public:
        void show(){
            cout << "Hello world" << endl;
        }
        void show(int a){
            cout << "Helllo world" << a <<endl;
        }
};
int main(){
    a a1;
    a1.show(0);
    a1.show();

    return 0;
}