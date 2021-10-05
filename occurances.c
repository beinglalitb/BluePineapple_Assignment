#include<stdio.h>


int getOccurence(int n, int c)
{
	int cnt = 0;

	int i = c;

	while(i <= n)
	{
		if( i%10 == c)
			cnt++;
		
		if(i!=0 && i/10 == c)
		{
			cnt++;
			i++;
		}

		else if(i/10 == c-1)
			i = i + (10-c);
		else
			i = i + 10;
	}

	return cnt;

}

int main()
{
	int n,c,i;

	printf("Enter the value of n :");
	scanf("%d",&n);
	
	printf("Enter the number to be check :");
	scanf("%d",&c);
	
	printf("Occurance of %d is %d times\n", c, getOccurence(n,c));
}
