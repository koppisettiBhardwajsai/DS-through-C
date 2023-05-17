#include<stdio.h>
char stack[100] ;
int  top = -1 , size;
void Push(char ele)
{
	if(top == size - 1)
	{
		printf("Stack is full.Insertions are not possible\n");
	}
	else
	{
		top++;
		stack[top]=ele;
		printf("%c is inserted into stack\n",ele);
	}
}
int Pop()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
	char rm=stack[top];
	top--;
	return rm;	
	}
}
void Peek()
{
	if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Element at top is: %c\n",stack[top]);
	}
}
void Display()
{
	if(top==-1)
	{
		printf("Stack is empty.No elements to display\n");
	}
	else
	{
		int i;
		printf("Elements in the stack are\n");
		for(i=top;i>=0;i--)
		{
			printf("%c ",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	printf("Enter the size of the stack: ");
	scanf("%d",&size);
	//menu driven program
	int choice;
	while(1)
	{
	printf("Enter 1. Push 2.Pop 3.Peek 4.Display any other to exit: ");
	scanf("%d",&choice);
		if(choice==1)
		{
			//push() operation
			char ele;
			printf("Enter an element to pushed into the stack\n");
			scanf(" %c",&ele);
			Push(ele);
		}
		else if(choice==2)
		{
			//pop() operation
			char removed_element=Pop();
			if(removed_element==-1)
			{
				printf("Stack is empty.Cannot delete the element\n");
			}
			else
			{
				printf("Removed element is:%c\n",removed_element);
			}
		}
		else if(choice==3)
		{
			//peek() operation
			Peek();
		}
		else if(choice==4)
		{
			//display()
			Display(); 
		}
		else
		{
			printf("Thank you");
			break;
		}
	}
}
