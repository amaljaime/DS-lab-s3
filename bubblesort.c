#include<stdio.h>
void bubblesort(int a[50], int n){
int i,j,temp;
for(i=1;i<n;i++){
   for(j=0;j<(n-i);j++){
      if(a[j]>a[j+1]){
                      temp=a[j];
                      a[j]=a[j+1];
                      a[j+1]=temp;
   }
  }
 }
}

void main(){
int a[50],i,n,b,x;
printf("enter the size");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++){
   scanf("%d",&a[i]);
}
bubblesort(a,n);  
printf("The sorted array is:");
for(i=0;i<n;i++)
   {printf("%d",a[i]);
 }
}
