#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    int p;
    p=x;
    x=y;
    y=p;
    printf("The swapped value of x and y is %d %d resp.",x,y);

    return 0;
}