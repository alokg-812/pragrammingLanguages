#include<stdio.h>
int main(){
    printf("I love my India.\n");
    void nepal();
    nepal();
    return 0;
}
void australia(){
    printf("You are in Australia\n");
    void england();
    england();
}
void nepal(){
    printf("You are in Nepal\n");
    void japan();
    japan();
}
void england(){
    printf("You are in England\n");
    return ;
}
void japan(){
    printf("You are in Japan\n");
    void australia();
    australia();
}