#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

typedef struct data{
    string name;
    int id;
    int number;
}Data;

void input(){
    Data d1;
    cout << "Enter Name : ";
    getline(cin, d1.name);
    cout << "Enter ID : ";
    cin >> d1.id;
    cout << "Enter Number : ";
    cin>>d1.number;
    
}
void show(){
    ifstream file2;
    file2.open("test.txt", ios::out);
    while (!file2.eof())
    {
        string name;
        int id;
        int num;
        file2 >> id >> num;
        getline(file2, name);
        cout << "Name : " <<name << endl;
        cout << "Number :" <<num << endl;
        cout << "ID : "<<id << endl;
    }
    file2.close();
}
void find(int f){
    ifstream file2;
    file2.open("test.txt", ios::out);
    string name;
    int id;
    int num;
    int find = 0;
    while (!file2.eof())
    {
        file2 >> id >> num;
        getline(file2, name);
        if (id == f) {
            find++;
            break;
        }
    }
    if (find)
    {
        cout << "Student found !! "<<endl;
        cout << "Name : " <<name << endl;
        cout << "Number :" <<num << endl;
        cout << "ID : "<<id << endl;
    }else
    {
        cout << f << " is invalid ID";
    }
    file2.close();
}
int main(){
    input();
    show();
    int id;
    cout << "Enter ID : ";
    cin >> id;
    find(id);
    return 0;
}
