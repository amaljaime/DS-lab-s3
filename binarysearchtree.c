#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* left;
  struct node* right;
};

struct node* root=NULL;
struct node* ptr;
struct node* parent;

void insert()
{
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  if(newnode==NULL)
    {
      printf("NO SPACE\n");
    }
  else{
    int key,flag=0;
    printf("Enter the element:");
    scanf("%d",&key);
    newnode->data=key;
    newnode->left=NULL;
    newnode->right=NULL;
   if(root==NULL)
    {
      root=newnode;
    }
   else
     {
       ptr=root;
       while((ptr!=NULL)&&(flag==0))
	 {
	   if(key<ptr->data)
	     {
	       parent=ptr;
	       ptr=ptr->left;
	     }
	   else if(key>ptr->data)
	     {
	       parent=ptr;
	       ptr=ptr->right;
	     }
	   else
	     {
	       flag=1;
	     }
	 }
       if(flag==1)
	 {
	   printf("value exists\n");
	 }
       else
	 {
	   if(key>parent->data)
	     {
	       parent->right=newnode;
	     }
	   else
	     {
	       parent->left=newnode;
	     }
	 }
     }
  }
}

void delete()
{
  if(root==NULL)
    {
      printf("BST is empty\n");
    }
  else
    {
      int key,flag=0;
      ptr=root;
      printf("Enter the element to be deleted:");
      scanf("%d",&key);
      while((ptr!=NULL)&&(flag==0))
	{
	  if(key<ptr->data)
	    {
	      parent=ptr;
	      ptr=ptr->left;
	    }
	  else if(key>ptr->data)
	    {
	      parent=ptr;
	      ptr=ptr->right;
	    }
	  else
	    {
	      flag=1;
	    }
	}
      if(flag==0)
	{
	  printf("value does not exist\n");
	}
      else
	{
	  int case;
	  if((ptr->left==NULL)&&(ptr->right==NULL))
	    {
	    case=1;
	    }
	  else if((ptr->left!=NULL)&&(ptr->right!=NULL))
	    {
	    case=3;
	    }
	  else
	    {
	      case=2;
	    }
	}
      if(case==1)
	{
	  if(parent->left==ptr)
	    {
	      parent->left=NULL;
	    }
	  else
	    {
	      parent->right==NULL;
	    }
	  free(ptr);
	}
      else if(case==2)
	{
	  if(parent->left==ptr)
	    {
	      if(ptr->left!=NULL)
		{
		  parent->left=ptr->left;
		}
	      else
		{
		  parent->left=ptr->right;
		}
	    }
	  else
	    {
	      if(ptr->left!=NULL)
		{
		  parent->right=ptr->left;
		}
	      else
		{
		  parent->right=ptr->right;
		}
	    }
	  free(ptr);
	}
      else
	{
	  int i;
	  struct node* succ=ptr->right;
	  while(succ!=NULL)
	    {
	      succ=succ->left;
	    }
	  i=succ->data;
	  delete(succ->data);
	  ptr->data=i;
	}
    }
  
}

void search()
{
  int key,flag=0;
  ptr=root;
  printf("Enter the element to search:");
  scanf("%d",&key);
  while((ptr!=NULL)&&(flag==0))
    {
      if(key<ptr->data)
	{
	  ptr=ptr->left;
	}
      else if(key>ptr->data)
	{
	  ptr=ptr->right;
	}
      else{
	flag=1;
      }
    }
  if(flag==1)
    {
      printf("Element is found\n");
    }
  else{
    printf("Element not found\n");
  }
}
void preorder(node* root)
{
  if(root!=NULL)
    {
      printf("%d",root->data);
      preorder(root->left);
      preorder(root->right);
    }
}
void inorder(node* root)
{
  if(root!=NULL)
    {
      inorder(root->left);
      printf("%d",root->data);
      inorder(root->right);
    }
}
void postorder(node* root)
{
  if(root!=NULL)
    {
      postorder(root->left);
      postorder(root->right);
      printf("%d",root->data);
    }
    
}


void main()
{
  int ch;
  while(1)
    {
      printf(
    }
}

  
