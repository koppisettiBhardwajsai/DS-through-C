//implementing queue data structure using arrays
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void enque(int val)
{
	if(rear==max_size-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		queue[rear]=val;
	}
	else 
	{
		queue[++rear]=val;
	}
}
int deque()
{
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		int de=queue[rear];
		rear=-1;
		front=-1;
		return de;
	}
	else
	{
		int de=queue[front];
		front++;
		return de;
	}
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d ",queue[i]);
	}
	printf("\n");
}
int main()
{
	printf("Enter maximum size of queue: ");
	scanf("%d",&max_size);
	int choice;
	while(1)
	{
		printf("Enter\n1.Enque\n2.Deque\n3.Display\nother to exit\n");
		printf("Enter the option: ");
		scanf("%d",&choice);
		if(choice==1)
		{
			//Enque()
			int val;
			printf("Enter value: ");
			scanf("%d",&val);
			enque(val);//function call
		}
		else if(choice==2)
		{
			//Deque()
			int res=deque();
			if(res==-1)
			{
				printf("Queue is empty\n");
			}
			else
			{
				printf("%d is deleted\n",res);
			}
		}
		else if(choice==3)
		{
			//Display()
			display();
		}
		else
		{
			printf("Thank you\n");
			break;
		}
	}
}
