#include<stdio.h>
int min(int x,int y){
    if(x<y) return x;
    return y;
}
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    int m;
    m=min(a,b);
    printf("The minimum of %d and %d is %d",a,b,m);
    return 0;
}