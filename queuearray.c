#include<stdio.h>
#include<stdlib.h>
const int max=5;
int front=-1;
int rear=-1;
int arr[5];

void enqueue(){
  int data;
  if(rear==max-1)
    {
      printf("Queue ovwerflow");
      return;
      }
  printf("\nEnter element to be enqueued:");
  scanf("%d",&data);
  if(front==-1 || rear==-1){
    front=0;
    rear=rear+1;
    arr[rear]=data;
  }
  else{
    rear=rear+1;
    arr[rear]=data;
  }
}

void dequeue(){
  if(front==-1||front>rear)
    {
      printf("Queue underflow\n");
      return;
    }
  else
    {
      printf("Dequeued element is:%d",arr[front]);
      front++;
    }
}

void display(){
  int i;
  if(front==-1){
     printf("Empty queue\n");
  }
  else{
  printf("\nThe elements are :");
  for(i=front;i<=rear;i++){
    printf("%d ",arr[i]);
  }
 }
}

void main(){
  int op;
  while(1){
    printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&op);
    if(op==1){
      enqueue();
    }
    else if(op==2){
      dequeue();
    }
    else if(op==3){

      display();
    }
    else if(op==4){
      exit(0);
    }
    else printf("INVALID OPERATION!!");

  }
}
