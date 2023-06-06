//Array to Binary Tree
#include<stdio.h>
#include<stdlib.h>
struct t_node{
	int data;
	struct t_node *left;
	struct t_node *right;
};
typedef struct t_node TreeNode;

void in_order(TreeNode *root)
{
	if(root!=NULL)
	{
		in_order(root->left);
		printf("%d ",root->data);
		in_order(root->right);
	}
}

//Function to create a new node
TreeNode *create_tree_node(int val)
{
	TreeNode *nn=(TreeNode *)malloc(sizeof(TreeNode));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}

TreeNode *constructBT(int *arr,int n)
{
	TreeNode *q[100];
	int front ,rear;
	front=rear=0;
	q[rear++]=create_tree_node(arr[0]);
	int i=0;
	while(1)
	{
		if(2*i+1>=n && 2*i+2>=n)
		{
			break;
		}
		if(2*i+1<n)
		{
			//creating a node with value 2*i+1
			TreeNode *t=create_tree_node(arr[2*i+1]);
			q[rear++]=t;  //adding it to a queue
			q[front]->left=t; //connecting the left child
		}
		if(2*i+2<n)
		{
			//creating a node with value 2*i+2
			TreeNode *t=create_tree_node(arr[2*i+2]);
			q[rear++]=t;  //adding it to a queue
			q[front]->right=t; //connecting the right child
		}
		front++;
		i++;
	}
	return q[0]; //root of the constructed binary tree
}

int main()
{
	int n;
	printf("Enter the size if the array: ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	TreeNode *root=constructBT(arr,n);
	in_order(root);
}
