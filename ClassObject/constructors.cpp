#include<iostream>
#include<string>
using namespace std;
class Car {
public:    
    string name;
    int price;
    int seat;
    string type;

    Car( string n , int p , int s, string t){
        name = n ;
        price = p ;
        seat = s;
        type = t;
    }

};
int main() {
    Car c1("Toyota", 45000000, 8 , "suv");

    // c1.name ="Toyota";
    // c1.price = 4500000;
    // c1.seat = 8;
    // c1.type = "SUV";

    Car c2( "Thar" , 1750000 , 4 , "JEEP");
    // c2.name ="Thar";
    // c2.price = 1750000;
    // c2.seat = 4;
    // c2.type = "JEEP";

    cout<<c1.name<<" "<<c1.type<<" "<<c1.price<<" "<<c1.seat<<" "<<endl;
    cout<<c2.name<<" "<<c2.type<<" "<<c2.price<<" "<<c2.seat<<" "<<endl;

}