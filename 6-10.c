#include<stdio.h>

int main(){

    int n,reverse=0,r;

    printf("Enter the number N\n");
    scanf("%d",&n);

    while (n!=0){
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
      printf("The reversed number is : %d\n",reverse);

    return 0;
}