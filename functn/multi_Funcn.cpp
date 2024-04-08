#include<iostream>
using namespace std;
void usa() {
    cout<<"I am an American!\n";

}
void india() {
    cout<<"I am an Indian!\n";
    usa();
}
int main() {
    cout<<"You are in main function.\n";
    india();
}