#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll_no;
    float gpa;
};

int main(){
    Student s1;
    cout<<"Enter tha name of the S1 student: ";
    cin>>s1.name;
    // s1.name = "Alok";
    cout<<"Enter tha roll no. of the S1 student: ";
    cin>>s1.roll_no;
    // s1.roll_no = 15;
    cout<<"Enter tha gpa of the S1 student: ";
    cin>>s1.gpa;
    // s1.gpa = 8.25;

    Student s2;
    s2.name = "Adi";
    s2.roll_no = 11;
    s2.gpa = 8.20;

    // cout<<s1<<endl; //will throw error
    cout<<s1.roll_no<<endl; //will throw error
    cout<<s2.name<<endl; //will throw error
    

}