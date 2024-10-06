#include <stdio.h>
    int gcd(int,int);
int main() {
            	int a,b;
	printf("enter two numbers");
	scanf("%d,%d",&a,&b);
    gcd (a,b);  


}//main
int  gcd(int a,int b)
    {
        printf("hello world");
        int res;

    res=a % b;
    printf("%d",res);
    
    }//gcd
