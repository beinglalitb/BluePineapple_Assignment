#include<stdio.h>



void palindrome(int arr[], int n)
{
	 int flag = 0;

	for(int i = 0; i <= n/2 && n != 0; i++)
	{
		if(arr[i] != arr[n-i-1])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 1)
		printf("Not Palindrome");
	else
		printf("Palindrome");
}

int main()
{
	int i,n,arr[100];

	printf("Enter Size of Array :");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Data :");
		scanf("%d",&arr[i]);
	}

	palindrome(arr,n);

	return 0;
}
