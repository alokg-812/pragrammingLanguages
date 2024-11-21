#include<stdio.h>
void oddEven(int x){
    if(x%2==0) printf("%d is even",x);
    else printf("%d is odd",x);
    }
int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    oddEven(a);
    return 0;
}