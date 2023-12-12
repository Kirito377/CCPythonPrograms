#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream o("test.txt");
    o<<"HELLOOOOOO";
    o.close();
    ifstream i("test.txt");
    string name;
    i>>name;
    cout << name;
    return 0;
}