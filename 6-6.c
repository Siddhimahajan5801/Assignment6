#include<stdio.h>

int main(){
    
    int i,n,fact=1;
    printf("Enter the number whose factorial is to be calculated:\n");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        fact=fact*i;
    }

    printf("The factorial of %d is %d \n",n,fact);

    return 0;
}