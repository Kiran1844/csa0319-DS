#include<stdio.h>
int a[50],i,n=5;
void input_array()
{
    printf("enter the elemnts into array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display()
{
    printf("output is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}

void insertion()
{
    int pos,ele;
    printf("enter the postion and elemennt:");
    scanf("%d %d",&pos,&ele);
    for(i=n;i>pos;i--)
    {
        a[i]=a[i-1];
        
    }
    a[pos]=ele;
}
void delete_array()
{
    int pos;
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
}
void exit()
{
	printf("nill");
}
int main()
{
    int choice;
    do{	
    printf("THE MAIN MENU");
    printf("\n 1.input the array\n");
    printf("\n 2.insertion of array\n:");
    printf("\n 3.delete the arry\n");
    printf("\n 4. display the array\n");
    printf("\n 5. end the page\n");
    printf("\n enter the choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:input_array();
        break;
        case 2:insertion();
        break;
        case 3:delete_array();
        break;
        case 4:display();
        break;
        case 5:exit();
        break;
        
    }

}
while(choice>=1 && choice<=5);
}
