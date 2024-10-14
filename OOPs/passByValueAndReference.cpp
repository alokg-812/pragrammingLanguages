#include<iostream>
#include<string>
using namespace std;

class Car{
public:
    string brand;
    float price;
    int seats;
};

void print(Car c){
    cout << "Brand: " << c.brand << endl;
}

void changebyValue(Car c){
    c.brand = "Honda";
}
void changebyReference(Car& c){
    c.brand = "Alto";
}
int main(){
    Car c1;
    c1.brand = "Toyota";
    c1.price = 20000.0;
    c1.seats = 5;

    print(c1);
    changebyValue(c1);
    print(c1);

    Car c2;
    c2.brand = "Maruti";
    c2.price = 15000.0;
    c2.seats = 7;

    print(c2);
    changebyReference(c2);
    print(c2);
}