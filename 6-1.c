#include<stdio.h>

int main(){
    int i,n,s=0;

    printf("Enter the number N\n");
    scanf("%d",&n);

    printf("The sum of first N natural numbers is:\n");

    for (i=1;i<=n;i++){
        s=s+i;    
    }
        printf("%d ",s);
    return 0;
}