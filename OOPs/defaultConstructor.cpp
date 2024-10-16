#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    float gpa;
    
    Student(){} // default constructor
    
    Student(string n, int r){ // Parameterized Constructor
        name = n;
        roll_no = r;
    }
};

int main(){
    Student s1("Alok", 15);
    s1.roll_no = 24; // this will be overwritten
    s1.gpa = 8.25; // this is also valid

    Student s2;
    s2.name = "Akanksha";
    s2.roll_no = 11;
    s2.gpa = 9.00;
}