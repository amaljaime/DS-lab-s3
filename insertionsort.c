#include<stdio.h>
void insertionsort( int a[50], int n)
{
 int i,element,pos;
 for(i=1;i<n;i++)
   {
    element=a[i];
    pos=i;
    while(pos>0 & a[pos-1]>element)
     {
      a[pos]=a[pos-1];
      pos=pos-1;
     }
     a[pos]=element;
   }

}

void main()
{
int a[50],n,i;
printf("Enter the size:");
scanf("%d",&n);
for(i=0;i<n;i++)
  {
   printf("Enter the elements:");
   scanf("%d",&a[i]);
  }
insertionsort(a,n);
printf("The sorted array is:");
for(i=0;i<n;i++)
  {
   printf("%d",a[i]);
  }
}
