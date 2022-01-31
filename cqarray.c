#include<stdio.h>
# define max 10
int rear=-1;
int front=-1;
int queue[max];
void main()
{
int choice;
printf("----Menu----");
while(1)
{
    printf("\n1.Insertion\n2.Deletion\n3.Display");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:enqueue();
        break;
        case 2:dequeue();
        break;
        case 3:display();
        break;
        case 4:exit(0);
        default:printf("invalid chocie");
    }
}
}
void enqueue()
{
    int value;
    printf("Enter value to be inserted : ");
    scanf("%d",&value);
    if((front==-1)&&(rear==-1))
    {
        front=0;
        rear=0;
        queue[rear]=value;
        printf("***Node inserted***\n");
    }
else if((rear+1)%max==front)
{
    printf("Overflow");
}
else
{
    rear=(rear+1)%max;
    queue[rear]=value;
    printf("***Node inserted***");
}
}
void dequeue()
{
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        printf("Element deleted from  queue......\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("Element deleted from queue.....\n",queue[front]);
        front=(front+1)%max;
    }
}
void display()
{
    int i=front;
    if((front==-1)&&(rear==-1))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("Elements are : \n");
        while(i<=rear)
        {
            printf("%5d",queue[i]);
            i=(i+1)%max;
        }
    }
}

