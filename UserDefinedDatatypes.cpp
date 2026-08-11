#include<iostream>
using namespace std;
class Student {
public:    
    string name;
    float rno;
    float cgpa;

};
int main() {
    Student s1;
    s1.name = "gyan";
    s1.rno = 78;
    s1.cgpa = 8.0;

    Student s2;
    s2.name = "prakash";
    s2.rno = 80;
    s2.cgpa = 8.5;

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;
    cout<<s1.cgpa<<endl;
    cout<<s2.cgpa<<endl;
    cout<<s1.rno<<endl;
    cout<<s2.rno<<endl;

}