#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
int main()
{
	//create a node
	NODE *node1=(NODE *)malloc(sizeof(NODE));
	NODE *node2=(NODE *)malloc(sizeof(NODE));
	NODE *node3=(NODE *)malloc(sizeof(NODE));
	node1->data=10;
	node2->data=20;
	node3->data=30;
	//printf("%d %d %d",node1->data,node2->data,node3->data);
	//linking nodes together
	node1->next=node2;//linking node1 and node2
	node2->next=node3;//linking node2 and node3
	node3->next=NULL;//setting node3 next part to NULL
	printf("%d\n",node1->data); //data in node1
	printf("%d\n",node1->next->data);//data in node2
	printf("%d",node1->next->next->data);//data in node3
}
