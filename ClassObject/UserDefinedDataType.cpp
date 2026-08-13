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
    //s1.rno = 78;
    cout<<"enter roll : ";
    cin>>s1.rno;

    s1.cgpa = 8.0;

    // Student s2;
    // s2.name = "prakash";
    // s2.rno = 80;
    // s2.cgpa = 8.5;

    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<" "<<endl;
    //cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<" "<<endl;

}