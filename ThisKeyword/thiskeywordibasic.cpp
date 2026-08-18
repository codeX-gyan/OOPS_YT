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
//     Cricketer c2("Rohit Sharma",18000);

//     cout<<c1.name<<" "<<c1.runs<<endl;
//     cout<<c2.name<<" "<<c2.runs<<endl;
// }





// #include<iostream>
// using namespace std;

// class Cricketer{
// public:
//     string name;
//     int runs;
//     Cricketer(string name, int runs){         //This->name IS THE KEY WORD --
//         name = name;             // if we dont use this and directly put name = mame tph garbage value aayegi
//         runs = runs;
//     }
// };
// int main(){
//     Cricketer c1("Virat Kohli",25000);
//     Cricketer c2("Rohit Sharma",18000);

//     cout<<c1.name<<" "<<c1.runs<<endl;
//     cout<<c2.name<<" "<<c2.runs<<endl;
// }



#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string Name, int Runs){         //This->name IS THE KEY WORD --
        name = Name;             // if we dont use this and directly put name = mame tph garbage value aayegi
        runs = Runs;             //yaha humne declaration me n->N se replace kiya and get the value
    }
};
int main(){
    Cricketer c1("Virat Kohli",25000);
    Cricketer c2("Rohit Sharma",18000);

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}