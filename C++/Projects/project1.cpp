#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;
class Student{
    private:
        
        string name;
        string course;
        int rollNumber;
        float marks;
        void input(){
            cout <<"Enter Name : "; getline(cin, name);
            cout <<"Enter Course : "; cin.ignore(1,'\n'); getline(cin, course);
            cout <<"Enter Roll Number : "; cin >> rollNumber;
            cout << "Enter Number : "; cin >> marks;
            fflush(stdin);
        }

    public:
        void addStudent(){
            input();
            ofstream file;
            file.open("data.txt", ios::app);
            file <<endl <<rollNumber <<" "<< marks <<" "<<course << " "<< name;
            cout << "Student added!\n\n";
            file.close();
        }
        void searchStudent(){
            int f;
            cout << "Enter Roll Number : ";
            cin >>f;
            ifstream file2;
            file2.open("data.txt", ios::out);
            string name;
            string course;
            int rollNumber;
            int num;
            int find = 0;
            while (!file2.eof())
            {
                file2 >> rollNumber >> num >> course;
                getline(file2, name);
                if (rollNumber == f) {
                    find++;
                    break;
                }
            }
            if (find)
            {
                cout << "Student found !! \n"<<endl;
                cout << "Roll Number : "<<rollNumber << endl;
                cout << "Name : " <<name << endl;
                cout << "Course : " <<course << endl;
                cout << "Number :" <<num << endl;
            }else
            {
                cout << f << " is invalid ID";
            }
            file2.close();
        }
        void showData(){
            ifstream file2;
            file2.open("data.txt", ios::in);
            cout << "Details : \n\n";
            while (!file2.eof())
            {
                string name;
                string course;
                int rollNumber;
                int num;
                file2 >> rollNumber >> num >> course;
                getline(file2, name);
                cout << "Roll Number : "<<rollNumber << endl;
                cout << "Name : " <<name << endl;
                cout << "course : " <<course << endl;
                cout << "Number :" <<num << endl <<endl;
            }
            file2.close();
        }
};

int main() {

    Student stud;    
    int choice;
    while(1){
    cout << "**** Student Details **** " << endl;
    cout << "1. Add Student" << endl;
    cout << "2. Search student" << endl;
    cout << "3. Show all data"<< endl;
    cout << "4. Exit"<< endl;
    cout << "\nEnter choice : ";
    cin >> choice;
    fflush(stdin);
    switch (choice)
    {
        case 1:
            stud.addStudent();
            break;
        case 2:
            stud.searchStudent();
            break;
        case 3:
            stud.showData();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Invalid selection";
            break;
    }

    }
    return 0;
}