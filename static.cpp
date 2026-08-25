#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    string name;
    static string university; // static member variable to store university name
};
string Student::university = "LPU"; // initializing static member variable
int main(){
    Student s1;
    cout<<Student::university<<endl; // accessing static member variable using class name
    return 0;
}