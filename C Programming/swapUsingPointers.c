#include<stdio.h>
void swap( int* ptr1, int* ptr2){
    int temp=*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main(){
    int x,y;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d",&y);
    printf("%d-%d\n",x,y);
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}