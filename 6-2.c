#include<stdio.h>

int main(){
    int i,n,s=0;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The sum of first N even natural numbers are:\n");

for (i=2;i<=2*n;i=i+2 ){
    s=s+i;
    }

    printf("%d ",s);
    
    return 0;
}