#include<stdio.h>

int main(){
    int n ,i=1,x=0,y=1,z=0;
    printf("input length: ");
    scanf("%d",&n);
    printf("Deret Fibonacci:\n");
    while(i<=n){
        printf("%d\n",x);
        z=x+y;
        x=y;
        y=z;
        i++;
    }
    return 0;
}