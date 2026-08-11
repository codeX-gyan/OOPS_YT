#include<iostream>
using namespace std;
class Car {
public:    
    string name;
    int price;
    int seat;
    string type;

};

void print( Car c ) {
    cout<<c.name<<" "<<c.type<<" "<<c.price<<" "<<c.seat<<" "<<endl;
}
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

    Car c3;
    c3.name ="Honda City";
    c3.price = 1700000;
    c3.seat = 6;
    c3.type = "sedan";


    print(c1);
    print(c2);
    print(c3);

    // cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<" "<<c1.seat<<" "<<endl;
    //cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<" "<<c2.seat<<" "<<endl;

}