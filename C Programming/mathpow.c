#include<stdio.h>
#include<math.h>
int main(){
    float a;
    printf("Enter the base value: ");
    scanf("%f",&a);
    float b;
    printf("Enter the power value: ");
    scanf("%f",&b);
    float p=pow(a,b);
    printf("%f raised to the power %f is %f",a,b,p);
    return 0;
}