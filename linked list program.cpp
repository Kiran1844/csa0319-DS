 #include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL,*p,*t,*newnode;
void create()
{
	int i,n,ele;
	printf("enter the list  count");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=newnode;
			p=newnode;
		}
		else
		{
			for(p=head;p->next!=NULL;p=p->next);
			p->next=newnode;
			p=newnode;
		}
	}
}
void display()
{
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		for(p=head;p!=NULL;p=p->next)
		printf("%d->",p->data);
	}
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
		printf("1.create\n  2.display\n 3.exit\n");
		printf("enter your choice:");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:create();break;
		
			case 2:display();break;
			case 3:exit();
			default:printf("entered wrong choice.....");
		}
	}
	while(cho>0 && cho<=3);
}
