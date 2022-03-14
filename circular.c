#include<stdio.h>
#include<stdlib.h>
#define maxsize 4
int q[30],front=-1,rear=-1;
void Display()
{
  int i;
  if(front==-1)
  {
    printf("Queue is empty\n");
    exit(0); 
  }
  if(front<=rear)
  {
    printf("Queue contains\n");
    for(i=front;i<=rear;i++) 
    printf("%d\t",q[i]);
  }
  else
  {
    for(i=front;i<maxsize;i++)
    { 
      printf("%d\t",q[i]);
    }
    for(i=0;i<=rear;i++)
    {
       printf("%d\t",q[i]);
    }
  }
}
void Enqueue(int ele)
{
  rear=(rear+1)%maxsize;
  if(rear==front)
  {
    printf("Queue is full\n");
    exit(0);
  }
  q[rear]=ele;
  if(front==-1)
  {
    front=0;
  }
} 
void Dequeue()
{
   int ele;
   if(front==-1)
   {
    printf("Queue is empty\n");
    exit(0);
   }
   ele=q[front];
   if(front==rear) 
   {
    front=-1;
    rear=-1;
   }
  else
  { 
   front=(front+1)%maxsize;
   printf("%d is removed\n",ele);
  }
}
void main()
{
 int ch,ele,op=1;
 while(op)
 {
   printf("\n1.INSERT \t 2.DELETE \t 3.DISPLAY\n");
   printf("Enter a choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
     case 1:printf("Enter a element to insert:");
            scanf("%d",&ele);
            Enqueue(ele);
            break;
     case 2:Dequeue();
            break;
     case 3:Display();
            break;
     default:printf("Invlid Choice\n");
   }
  printf("\nDo you want to continue(0|1)\n");
  scanf("%d",&op);
 }
}            
            
   
    
