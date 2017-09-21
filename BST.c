#include<stdio.h>
#include<stdlib.h>

typedef struct bst
{
	int data;
	struct bst*left,*right;
}node;
void traverse_inorder(node*q)
{
	if(q!=NULL)
	{
	traverse_inorder(q->left);
	printf("%d\t",q->data);
	traverse_inorder(q->right);
    }
}
	
void insert(node**r,int num)
{
	node*temp,*ptr;
	temp=*r;
	
	if(temp==NULL)
	*r=ptr;
	else
	{
		if(num>temp->data)
		{
			if(temp->right==NULL)
			{
			ptr=(node*)malloc(sizeof(node));
			ptr->data=num;
			ptr->left=NULL;
			ptr->right=NULL:
			temp->right=ptr;
			return;
		}
				else
				{
				temp=temp->right;
				insert(&temp,num);
			}
		}
			if(temp->left!=NULL)
			{
			temp=temp->left;
			insert(&temp,num);
		}
	}
}
int search_bst(node*q)
{
	if(q==NULL)
	return -1;
	else
	{
		if(temp->data==num)
		return 1;
		else
		{
			if(num>q->data)
			{
				search_bst(q->right,num);
			}
			else
			{
				search_bst(q->left,num);
			}
		}
	}
}
			

void delete(node**q,int num)
{
	node*temp;
	temp=*q;
	if(temp==NULL)
	{
		printf("\nThe given no. is not found");
		return;
	}
	else
	{
		if(temp->data==num)
		{
			if(temp->left==NULL&&temp->right==NULL)
			free(temp);
			
	else
	{
			if(num>q->data)
			{
				delete(q->right,num);
			}
			else
			{
			           delete(q->left,num);
			}
		}
	}
}

int main()
{
	
	node*root;
	root=NULL;
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	traverse_inorder(root);
	return 0;
	if(search_bst(root 7)==1)
		printf("The number %d is present in the tree",7);
		else
		printf("The number %d is not present in the tree",7);
		return 0;
}






	 
	  
