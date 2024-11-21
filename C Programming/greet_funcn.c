#include<stdio.h>
void greet(){
    printf("Hello1\n");
    printf("Hello2\n");
    return;
    printf("Hello3\n");
    }
int main(){
    printf("Hello4\n");
    printf("Hello5\n");
    greet();
    printf("Hello6\n");
    return 0;
}