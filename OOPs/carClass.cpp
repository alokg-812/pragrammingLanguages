#include<iostream>
#include<string>
using namespace std;

class Car{
    public:
        string model;
        float price;
        int seats;
};

void print(Car c){
    cout << "Model: " << c.model << endl;
    cout << "Price: " << c.price << endl;
    cout << "Seats: " << c.seats << endl;
}

int main(){
    Car car1;
    car1.model = "Toyota";
    car1.price = 200000.0;
    car1.seats = 5;


    Car car2;
    car2.model = "Honda";
    car2.price = 205000.0;
    car2.seats = 4;

    Car car3;
    car3.model = "Ertiga";
    car3.price = 220000.0;
    car3.seats = 8;

    print(car1);
    print(car2);
    print(car3);
}