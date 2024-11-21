#include<stdio.h>
#include<math.h>
int fact(int k){
    int t=1;
    for(int i=1;i<=k;i++){
    t=t*i;
    }
    return t;
}
int nPr(int x,int y){
    return fact(x)/fact(x-y);
}
int main(){
    int n;
    printf("Enter the n: ");
    scanf("%d",&n);
    int r;
    printf("Enter the r: ");
    scanf("%d",&r);
    int p=nPr(n,r);
    printf("%dP%d will give us the value as: %d",n,r,p);
    return 0;
}