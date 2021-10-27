#include<stdio.h>

void accept(int t[10][10], int r, int c)
{

	int i,j;

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{

			scanf("%d",&t[i][j]);
		}
	}

}

void display(int t[10][10], int r, int c)
{

	int i,j;

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf(" %d ",t[i][j]);
		}
		printf("\n");
	}


}


int main()
{
	int a[10][10],b[10][10],mult[10][10];
	int r,c,i,j;

	printf("Enter the no of rows \n");
	scanf("%d",&r);

	printf("Enter the no of cols \n");
	scanf("%d",&c);

	printf("Accepting Matrix One \n");
	accept(a,r,c);

	printf("Accepting Matrix Two \n");
	accept(b,r,c);

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			mult[i][j] = a[i][j] * b[i][j];
		}

	}


	printf("DISPLAYING Matrix One \n");
	display(a,r,c);

	printf("DISPLAYING Matrix Two \n");
	display(b,r,c);

	printf("Multiplied Matrix \n");
	display(mult,r,c);

	return 0;
}
