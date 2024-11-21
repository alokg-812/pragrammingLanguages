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
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int x= nCr(i,j);
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}