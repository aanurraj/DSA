#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void main()
{
	int c=0,n;
	while(c==0)
	{
		printf("Slect from the following options\n1.Push\n2.Pop\n3.Display\n\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
		 		display();
		 		break;
		 	default:
		 		printf("Invalid selection......\n");
		}
		printf("Enter 0 for more 1 to exit....\n");
		scanf("%d",&c);
	}
}
void push()
{
	struct node *ne;
	ne=(struct node *)malloc(sizeof(struct node));
	printf("Enter the number....\n\n");
	scanf("%d",&ne->data);
	if(top==NULL)
	{
		top=ne;
	}
	else
	{
		ne->next=top;
		top=ne;
	}
}
void display()
{
	struct node *head;
	head=top;
	if(top==NULL)
	{
		printf("The stack is empty nothing to display....\n");
	}
	else
	{
		while(head->next!=NULL)
		{
			printf("%d\n",head->data);
			head=head->next;

		}
	}
}

void pop()
{
	if(top==NULL)
	{
		printf("The stack is empty,Nothing to delete....\n");

	}
	else
		top=top->next;

}