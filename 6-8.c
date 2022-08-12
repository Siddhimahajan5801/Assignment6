#include<stdio.h>

int main(){
    int i,n,count=0;

    printf("Enter the number N\n");
    scanf("%d",&n);

    //a prime number is only divisible by 1 and itself:

    for (i=1;i<=n;i++){
        if (n%i==0)
        count++;
    }
      if (count==2)
      printf("It is a prime number\n");

      else 
      printf("It is not a prime number");

    return 0;
}