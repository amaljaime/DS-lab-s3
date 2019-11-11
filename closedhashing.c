#include<stdio.h>
#include<stdlib.h>
#define max 10
int arr1[max];
int arr2[max];

int insert()
{
  int n,mod;
  printf("Enter the element:");
  scanf("%d",&n);
  mod=n%max;
  int i=(mod+1)%max;
  if(arr1[mod]==0)
    {
      arr2[mod]=n;
      arr1[mod]=1;
      return 1;
    }
  else
    {
      while(i!=mod)
	{
	  if(arr1[i]==0)
	    {
	     arr2[i]=n;
	     arr1[i]=1;
	     return 1;
	    }
	}
      i=(i+1)%mod;
    }
  return -1;
}

int search()
{
  int n,mod,i;
  printf("Enter the element to search:");
  scanf("%d",&n);
  mod=n%max;
  i=(mod+1)%max;
  if(arr1[mod]==0)
    {
      return -1;
    }
  else if(arr2[mod]==n)
    {
      return mod; 
    }
  else
    {
      while(i!=mod)
	{
	  if(arr2[i]=n)
	    {
	      return i;
	    }
	  i++;
	}
    }
  return -1;
}

void display()
{
  int i=0;
  while(i<max)
    {
      if(arr1[i]==1)
	{
	  printf("arr[%d]:%d",i,arr2[i]);
	}
      i++;
    }
}

void main()
{
  int op,b;
  while(1)
    {
      printf("\n1.Insert\n2.Search\n3.Display\n4.Exit\nSelect Operation:");
      scanf("%d",&op);
      if(op==1)
	{
	  b=insert();
	  if(b==1)
	    {
	      printf("Successfully inserted\n");
	    }
	  else
	    {
	      printf("No space");
	    }
	}
      else if(op==2)
	{
	  b=search();
	  if(b==-1)
	    {
	      printf("Not Found\n");
	    }
	  else
	    {
	      printf("Found at position:%d",b);
	    }
	}
      else if(op==3)
	{
	  display();
	}
      else if(op==4)
	{
	  exit(0);
	}
      else
	{
	  printf("Invalid Operation\n");
	}
    }
}
