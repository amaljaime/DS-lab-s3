#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node* top;


void push()
{struct node* newnode=(struct node*)malloc(sizeof(struct node));
  int element;
  printf("Enter the element:");
  scanf("%d",&element);
  if(newnode==NULL)
    {
      printf("No space\n");
    }
  else if(top==NULL)
    {
      newnode->data=element;
      newnode->link=NULL;
      top=newnode;
    }
  else
    {
      newnode->data=element;
      newnode->link=top;
      top=newnode;
    }
  
}


void pop()
{
  int value;
  if(top==NULL)
    {
      printf("Empty stack\n");
      return;
    }
  struct node* temp=top;
  value=top->data;
  top=top->link;
  free(temp);
  printf("Poped element is:%d",value);
}

void display()
{
  if(top==NULL)
    {
      printf("Stack is empty\n");
    }
  else
    {
      printf("\nStack is:\n");
      struct node* temp=top;
      while(temp!=NULL)
	{
	  printf("%d\t",temp->data);
	  temp=temp->link;
	}
      
    }
    
}

void main()
{
  int option;
  do
    {
      printf("\nThe options available are:\n1.push\n2.pop\n3.display\n4exit\n\n");
      printf("Enter your choice:");
      scanf("%d",&option);
      switch(option)
	{
	case 1: push();
	  break;
	case 2: pop();
	  break;
	case 3: display();
	  break;
	case 4: printf("Exit\n");
	  break;
	default:printf("Invalid choice\n");
	}
    }while(option!=4);
}


