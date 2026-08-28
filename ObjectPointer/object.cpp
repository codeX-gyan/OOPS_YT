//----POINTERS RECAP-----

// #include<iostream>
// using namespace std;
// int main() {
//     int x = 4;
//     cout<<x<<endl;        // x ki val print hogi
//     cout<<&x<<endl;       // x ki address print hogi
//     int* p = &x;          // p me x ki address store hogyi
//     cout<<p<<endl;        // p ke ander jo address store hui thi wo adrs print hogi
//     cout<<*p<<endl;       // p ke andr wali adrs ki value print hogi i.e X ki val
//     *p = 8;               // changing the value of x using pointers
//     cout<<x<<endl;
// }



// #include<iostream>
// using namespace std;

// class Cricketer{
// public:
//     string name;
//     int runs;
//     Cricketer(string name, int runs){
//         this->name = name;               //--This->name IS THE KEY WORD 
//         this->runs = runs;
//     }
// };
// int main(){
//     Cricketer c1("Virat Kohli",25000);
//     //Cricketer c2("Rohit Sharma",18000);

//     Cricketer* p1 = &c1;
//     cout<<(*p1).runs<<endl;
//     (*p1).runs = 24000;           //change the runs fromo 25000->24000
//     cout<<c1.runs<<endl;   

// }



#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name;               //--This->name IS THE KEY WORD 
        this->runs = runs;
    }
    void change(Cricketer c){
        c->runs= 19000;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}
