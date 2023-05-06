 #include<stdio.h>
#include<stdlib.h>
#define size 5
int que[size],front=-1,rear=-1;
int enqueue()
{
	int ele;
	printf("enter the element:");
	scanf("%d",&ele);
	if(rear==size-1)
	{
		printf("queue is fulll....");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	if(front!=0 && rear==size-1)
	{
		rear=0;
	}
	else
	rear=rear+1;
	que[rear]=ele;
	return 0;
}
int dequeue()
{
	int ele;
	if(front==-1 && rear==-1)
	printf("queue is emptyyy....");
	else
	{
		ele=que[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front==size-1)
		front=0;
		else
		front=front+1;
		printf("the element deleted is %d",ele);
	}
	return 0;
}
int display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("queue is emptyyy...");
	}
	for(i=front;i<=rear;i++)
	printf("%d\t",que[i]);
	return 0;
}
int exit()
{
	printf("NILL....");
	return 0;
}
int main()
{
	int cho;
	do
	{
		printf("\n main menu \n");
		printf("1.enqueue\n 2.dequeue\n 3.display\n 4.exit\n");
		printf("enter your choice:");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:display();break;
			case 4:exit();
			default:printf("entered wrong choice.....");
		}
	}
	while(cho>0 && cho<=4);
}
