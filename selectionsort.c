#include<stdio.h>

void selectionsort(int a[50], int n){
	int i,j,min,temp;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
  }
 }	
   if(a[i]!=a[min]){
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;}
}


}



void main()
{
int a[50],i,n;
printf("Enter the size:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
selectionsort(a,n);
printf("The sorted array is");
for(i=0;i<n;i++){
	printf("%d",a[i]);
}
}
