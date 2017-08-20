#include<stdio.h>
#include<stdlib.h>
void insert_beg();
void display();
void insert_end();
void insert_pos();
void delete_beg();
void delete_end();
void delete_pos();
struct node 
{
	int data;
	struct node *next;
};
struct node *start=NULL;
void main()
{
	int i=0,n;
	while(i==0)
	{
		i++;
		printf("Select from the following options.....\n1.Insert at beggining\n2.Insert at end\n3.Insert at any position\n4.Delete from beggining\n5.Delete from end\n6.Delete from any position\n7.Display\n\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				insert_beg();
				break;
			case 2:
				insert_end();
				break;
			case 3:
				insert_pos();
				break;
			case 4:
				delete_beg();
				break;
			case 5:
				delete_end();
				break;
			case 6:
				delete_pos();
				break;
			case 7: 
				display();
				break;
			default :
				printf("Invalid Selection...");
		}
		printf("\nEnter 1 to exit 0 for more....\n\n");
		scanf("%d",&i);
	}
}
void insert_beg()
{
	struct node *ne,*head;
	ne=(struct node *)malloc(sizeof(struct node));
	printf("enter the number to be inserted...\n");
	scanf("%d",&ne->data);
	if(start==NULL)
	{
		start=ne;
		start->next=start;
	}
	else
	{
		head=start;
		while(head->next!=start)
		{
			head=head->next;
		}
		ne->next=start;
		
		start=ne;
		head->next=start;
	}

}
void display()
{
	struct node *head;
	head=start;
	if(start==NULL)
	{
		printf("list is empty...");
	}
	else
	{
		printf("%d\t",start->data);
		head=start->next;
		while(head!=start)
		{
			printf("%d\t",head->data);
			head=head->next;
		}

	}
}
void insert_end()
{
	struct node *ne,*head;
	ne=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number to be inserted....\n");
	scanf("%d",&ne->data);
	if(start==NULL)
	{
		start=ne;
		start->next=start;
	}
	else
	{
		head=start;
		while(head->next!=start)
		{
			head=head->next;
		}
		head->next=ne;
		ne->next=start;

	}
}
void insert_pos()
{
	int x,i=0;
	struct node *ne,*head;

	ne=(struct node *)malloc(sizeof(struct node));
		head=start;
	printf("\nEnter the number you want to insert...\n");
	scanf("%d",&ne->data);
	if(start==NULL)
	{
		start=ne;
		start->next=start;
	}
    else
    {
    	printf("\nEnter the position where you want to insert... \n");
		scanf("%d",&x);
		x--;
		while(i<x-1)
		{
			i++;
			head=head->next;
		}
		ne->next=head->next;
		head->next=ne;


    }

}
void delete_beg()
{
	struct node *head;
	head=start;
	if(start==NULL)
	{
		printf("The list is empty...\n");
	}
	else
	{
		while(head->next!=start)
		{
			head=head->next;
		}
		head->next=start->next;
		start=start->next;


	}
}
void delete_end()
{
	struct node *head;
	head=start;
	if(start==NULL)
	{
		printf("The list is empty...\n");

	}
	else
	{
		while(head->next->next!=start)
		{
			head=head->next;
		}
		head->next=start;

	}
}
void delete_pos()
{
	int i=0,x;
	struct node *head,*temp;
	head=start;
	if(start==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		printf("enter the position from where you want to delete the number...\n");
		scanf("%d",&x);
		x--;
		while(i<x-1)
		{
			i++;
			head=head->next;
		}
		temp=head->next;
		head->next=temp->next;
	}
}