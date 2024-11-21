#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter the number whose sq root is req.: ");
    scanf("%d",&a);
    float root = cbrt(a);
    printf("The square root of given number is %f",root);
}