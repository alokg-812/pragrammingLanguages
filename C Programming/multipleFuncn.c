#include<stdio.h>
void england(){
    printf("You are in England\n");
    return ;
}
void australia(){
    printf("You are in Australia\n");
    england();
}
void japan(){
    printf("You are in Japan\n");
    australia();
}
void nepal(){
    printf("You are in Nepal\n");
    japan();
}
int main(){
    printf("I love my India.\n");
    nepal();
}