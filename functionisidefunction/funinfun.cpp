// #include<iostream>
// using namespace std;

// class Cricketer{
// public:
//     string name;
//     int runs;
//     float avg;
//     Cricketer(string name, int runs, float avg ){
//         this->name = name;               //--This->name IS THE KEY WORD 
//         this->runs = runs;
//         this->avg = avg;
//     }
//     void print(){
//         cout<<name<<" "<<runs<<" "<<avg<<endl;
//     }
//     int matches() {
//         return runs/avg;
//     }
// };
// int main(){
//     Cricketer c1("Virat Kohli",25000,52.5);
//     Cricketer c2("Rohit Sharma",18000,47.8);

//     // cout<<c1.matches()<<endl;
//     // cout<<c2.matches()<<endl;

//     c1.print();
//     cout<<"matches : " <<c1.matches()<<endl;
//     c2.print();
//     cout<<"matches : " <<c2.matches()<<endl;
    
//     // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
//     // cout<<c2.name<<" "<<c2.runs<<" "<<c1.avg<<endl;
// }


#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name, int runs, float avg ){
        this->name = name;               //--This->name IS THE KEY WORD 
        this->runs = runs;
        this->avg = avg;
    }
    void print(){
        cout<<name<<" "<<runs<<" "<<avg<<endl;
    }
    int matches() {
        return runs/avg;
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000,52.5);
    Cricketer c2("Rohit Sharma",18000,47.8);

    // cout<<c1.matches()<<endl;
    // cout<<c2.matches()<<endl;

    c1.print();
    cout<<"matches : "<<c1.matches()<<endl;
    c2.print();
    cout<<"matches : "<<c2.matches()<<endl;
    
    // cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // cout<<c2.name<<" "<<c2.runs<<" "<<c1.avg<<endl;

}