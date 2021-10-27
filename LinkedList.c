#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NEWNODE (struct node *)malloc(sizeof(struct node))

struct node
{
	char Book[40];
	struct node * next;
};

struct node * Create(int n)
{
	struct node *first, *last, *temp;
	int i;

	if(n<=0)
	{
		printf("Can not add book...!! :(");
		exit(0);
	}

	first = NEWNODE;
	printf("Enter Book Name :");
	gets(first->Book);

	first->next=NULL;
	last = first;

	for(i=2; i<=n; i++)
	{
		temp = NEWNODE;
		printf("Enter Book Name :");
		gets(temp->Book);

		temp->next = NULL;
		last->next = temp;
		last = last->next; 
	}

	return first;
}

void Display(struct node *f)
{
	struct node *t;

	for(t=f ; t!=NULL ; t=t->next)
	{
		printf("\n %s \n",t->Book);
	}
}


struct node * Delete (struct node * f, int pos)
{
	struct node *s, *t;
	int i;

	if(pos == 1)
	{
		t = f;
		f = f->next;
		free(t);
		printf(" \n Book Deleted...!!! \n");
		return(f);
	}
	else
	{
		s = f;
		for(i=0; i<=(pos-2) && s!=NULL; i++)
		{
			s = s->next;
		}

		if(s==NULL)
		{
			printf("\n Invalid Position...!!!\n");
			return f;
		}
		else
		{
			t = s->next;
			s->next = t->next;
			free(t);
			printf(" \n Book Deleted...!!!\n");
			return f;
		}
	}
}

int SearchBook(struct node *f, char key[40])
{
	struct node *t;
	int i;	

	for(i=0, t=f; t!=NULL; t=t->next, i++)
	{
		if(!strcmp(t->Book,key))
		{
			return i;			
		}
	}
	
	return -1;
}


int main()
{
	int choice;

	struct node * head = NULL;
	int n,pos,result;
	char key[40]; 

	while(1)
	{
		printf("\n MENU \n 1: Insert a book \n 2: Delete a book \n 3: Print all books \n 4: Search a book \n 5: EXIT \n");
		scanf("%d",&choice);

		getchar();

		switch(choice)
		{
			case 1 :

				printf("\n How Many Books You want to add : ");
				scanf("%d",&n);

				getchar();

				head = Create(n);

				printf("Book Added");

				break;

			case 2 :

				printf("\n Enter Book Position You want to delete : ");
				scanf("%d",&pos);

				head = Delete(head,pos);
				
				break;

			case 3 :

				printf("\n List of Books You Added \n");

				Display(head);
				
				break;

			case 4 :
				
				printf("\n Enter the Book Name that you want to search :");
				gets(key);

				if(result = SearchBook(head,key))
					printf("\n %s is found at %d Position \n",key,result);
				else
					 printf("\n Book is not found \n");


			case 5 :
				exit(0);
			default :

				printf("\n Invalid Choice..!! \n ");
		}
	}
}
