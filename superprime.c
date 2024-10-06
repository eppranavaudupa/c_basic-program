//generate  super prime number upto n number
#include <stdio.h>
	int sievs(int n)
	{
	int arr[n+1],i,j;
	for (i=0;i<n;i++)
	{
	arr[i]=1;
	}
	for(i=2;i*i<=n;i++)
	{
		if(arr[i]==1)
		{
		for(j=i*i;j<=n;j=j+i)
			{
			arr[j]=0;
			}
		}
	}
	printf("Prime numbers upto N is:");
	for(i=2;i<n;i++)
	{
	if(arr[i]==1)
		{
		printf("%d \t",i);
		}
	}

//supprime
	for(i=2;i<n;i++)
		{
		if(arr[i]==1)
			{
			int suparr[100] = i ;
			printf("%d \n",suparr);
	
			}
		}

	 }



int main(){
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	sievs(n);



}
