#include<iostream>
using namespace std;
void display(int array[]) {
    for(int i = 0 ; i<=5;i++) {
        cout<<array[i]<<" ";
    }
    return;
}
void update(int b[]) {
    b[0]=100;
}
int main() {
    int arr[] = {1,4,2,7,5,4};
    //accesssing the elements of array in another function
    //updation, pass by value or pass by reference???
    display(arr);
    update(arr);
    display(arr);
}