// union is a user-defined data type that allows storing different data types in the same memory location.
//  It is similar to a structure, but it can only hold one value at a time.
//  The size of a union is determined by the size of its largest member.
//  Unions are useful when you want to save memory and work with different types of data in the same variable.
#include <iostream>
using namespace std;
union Students{

    int rollNo;
    int cgpa;
};
int main(){
    Students s1;
    
    s1.rollNo = 20;
    s1.cgpa = 9.00;
    
    cout<<"Roll No: "<<s1.rollNo<<endl;
    cout<<"CGPA: "<<s1.cgpa<<endl;
    return 0;
}
    