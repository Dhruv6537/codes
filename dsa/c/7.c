// wap to implement different operatinos such as insertion deletion and display
#include <stdio.h>

int a[10];
int rear = -1;
int front = -1;
void push()
{
    if (rear == 9)
    {
        printf("overflow");
    }
    else
    {
        int n;
         if (rear == -1 )        
        {
            rear = 0;
        }
        printf("enter the element to be inserted :");
        scanf("%d", &n);
        if (front == -1 )        
        {
            front = 0;
        }
        
        a[rear] = n;
        rear++ ;
    }
}

void delete()
{
    if (front > rear)
    {
        printf("Underflow");
    }
    else
    {
        front = front + 1;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
}

int main()
{

    int f;
    while (f)
    {
        printf("enter f :");
        scanf("%d", &f);
        switch (f)
        {
        case 1:
            push();
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("invalid");
            break;
        }
    }
}