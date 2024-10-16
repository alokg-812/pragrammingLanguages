#include<iostream>
using namespace std;
class Cricketer{
    public:
    string name;
    int runs;
    Cricketer(string name, int runs){
        this->name = name; 
        this->runs = runs;
    }
};

void print(Cricketer c){
    cout<<"Name: "<<c.name<<", Runs: "<<c.runs<<endl;
}

int main(){
    Cricketer c1{"Virat", 25000};
    Cricketer c2{"Rohit", 18000};
    print(c1);
    print(c2);
}