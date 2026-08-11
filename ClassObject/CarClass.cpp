#include<iostream>
using namespace std;
class Car {
public:    
    string name;
    int price;
    int seat;
    string type;

};
int main() {
    Car c1;
    c1.name ="Toyota";
    c1.price = 4500000;
    c1.seat = 8;
    c1.type = "SUV";

    Car c2;
    c2.name ="Thar";
    c2.price = 1750000;
    c2.seat = 4;
    c2.type = "JEEP";

    cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<" "<<endl;
    cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<" "<<endl;

}