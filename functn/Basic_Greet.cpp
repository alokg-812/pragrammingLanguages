#include<iostream>
using namespace std;
void greet() { //greet is the name of the function here...
    cout<<"GM"<<endl;
    cout<<"How are you?"<<endl;
}
void usa() {
    cout<<"You are in usa\n";
}
void india() {
    cout<<"You are in India\n";
}
int main() {   //main function by default har code me hota hi h aur sabse pahle yahi execute hota h
    india();
    greet();
    cout<<"Hola!"<<endl;
    usa();
    greet();
    cout<<"Hii\n";
}  