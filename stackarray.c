#include<stdio.h>
void push();
void pop();
void display();
int a[10];
    int top = -1;
void main()
{
	
	int c=0,n;
	while(c==0)
	{
		printf("Select from thw following....\n1.push\n2.pop\n3.display\n\n");
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
				printf("Invalid Selection..");

		}
		printf("Enter 0 for more 1 to exit...\n");
		scanf("%d",&c);
	}
}
void push()
{
	if(top==10-1)
	{
		printf("The stack is full..\n");

	}
	else
	{
		top++;
		printf("Enter the number to be inserted\n");
		scanf("%d",&a[top]);
	}
}
void display()
{
	printf("The stack contains following elements...\n");
	int i;
	if(top==-1)
	{
		printf("The stack is empty nothing to display...\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",a[i]);
		}
	}
}
void pop()
{
	if(top==-1)
	{
		printf("The stack is empty, nothing to\n");
	}
	else
	{
		top--;
	}
}