#include<iostream>
using namespace std;

class Car{
    public:
    string model;
    int seats;
    float price;
    Car(string m, int s, float p){
        model = m;
        seats = s;
        price = p;
    }
};

void print(Car c){
    cout << "Model: " << c.model << endl;
    cout<< "Seats: " << c.seats << endl;
    cout << "Price: " << c.price << endl;

}

int main(){
    Car car1("Toyota", 5, 20000.0);
    print(car1);
}