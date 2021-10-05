#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,n,sum;

	printf("Enter the value of n :");
	scanf("%d",&n);

	if(n<=0)
	{
		printf("Number should be start from 1 !! \n");
		exit(0);
	}


	printf("Perfect Numbers from 1 to %d\n",n);

	for(i=1;i<=n;i++)
	{
		sum = 0;
		
		for(j=1; j<i; j++)
		{
			if(i%j == 0)
				sum=sum+j;
		}

		if(i==sum)
			printf(" %d ",i);
	}

	printf("\n");

	return 0;
}
