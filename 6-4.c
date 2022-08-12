#include<stdio.h>

int main(){
    int i,n,s=0;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("Sum of Squares of first N natural numbers are:\n");

    for (i=1;i<=n;i++){
        s=s+(i*i);
        
    }

    printf("%d ",s);

    return 0;
}