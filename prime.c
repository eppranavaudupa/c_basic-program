//given number is prime or not
#include <stdio.h>
#include <stdbool.h>
int i,n,isprime,result;
int prime(int n);
int main(){
//	int i,n,isprime,result;
//	printf("write a number");
	result=prime(n);
	printf("%d",result);
}//main
int prime(int n){
	 printf("write a number");
	scanf("%d",&n);
	isprime = false;
        for(i=2;i<=n/2;i++)
        {
//        printf("%d n \t",n);
  //      printf("%d i\n",i);
        if(n%i == 0){
                isprime = true;
                break;
  }
        }//for
        if(isprime)
                printf("given number is not prime");
        else
        printf(" given number is  prime");
        return 0;





}//prime
