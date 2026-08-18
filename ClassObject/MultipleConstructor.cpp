#include<iostream>
using namespace std;
class Student {
public:    
    string name;
    float rno;
    float cgpa;
    int bc;

    Student(string n , float r , float c , int b) {
        name = n;
        rno = r;
        cgpa = c;
        bc = b;
    }

    Student() {

    }

    Student( float r , string n){
        name = n ;
        rno = r;
    }

    Student(float r){
        rno = r;
    }
};
int main() {
    Student s1("gyan",32,8.0,0);
    //s1.name = "gyan";
    //s1.rno = 78;
    //cout<<"enter roll : ";
    //cin>>s1.rno;

    //s1.cgpa = 8.0;
    //s1.bc = 1;

    Student s2;
    s2.name = "prakash";
    s2.rno = 80;
    s2.cgpa = 8.5;

    Student s3( 65 );

    Student s4( 33 , "gaurav");

    Student s5 = s1;   //deep copy qki agar hum iske andr ke kisi attribute ke sth kuch bhi change kre toh ye seh leta hai
    s5.name = "garry";

    Student s6(s1);
    s6.rno = 74;     // copy constructor


    cout<<s1.name<<" "<<s1.cgpa<<" "<<s1.rno<<" "<<s1.bc<<" "<<endl;
    cout<<s2.name<<" "<<s2.cgpa<<" "<<s2.rno<<" "<<endl;
    cout<<s3.rno<<" "<<endl;
    cout<<s4.name<<" "<<s4.rno<<endl;
    cout<<s5.name<<" "<<s5.cgpa<<" "<<s5.rno<<" "<<s5.bc<<" "<<endl;
    cout<<s6.name<<" "<<s6.cgpa<<" "<<s6.rno<<" "<<endl;
}




//JIS STRUCTURE ME CONSTRUCTOR BANA RHE HO USSI STRUCTURE ME FILL BHI KRNA HOTA HAI 