#include<stdio.h>
int factorial(int n){
    return (n*factorial(n-1));
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
