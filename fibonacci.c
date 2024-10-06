// generate fibonacci numbers using function
#include <stdio.h>
int fibonacci(){
	int f1=0,f2=1,i,num,f3;
        printf("enter number");
        scanf("%d",&num);
        printf("%d",f1);
        printf("%d",f2);
        for(i=0;i<num-2;i++)
        {
        f3 = f2+f1;
        f1=f2;
        f2=f3;
        printf("%d",f3);

        }
        return 0;
}
int main()
	
	{
	//int fibonacci(int num);
	  fibonacci();	


	}//main	
