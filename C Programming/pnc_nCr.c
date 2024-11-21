#include<stdio.h>
#include<math.h>
int fact(int k){
    int t=1;
    for(int i=1;i<=k;i++){
    t=t*i;
    }
    return t;
}
int nCr(int x,int y){
    return fact(x)/(fact(y)*fact(x-y));
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int r;
    printf("Enter the r: ");
    scanf("%d",&r);
    int c=nCr(n,r);
    printf("%dC%d will give us the value as: %d",n,r,c);
    return 0;
}