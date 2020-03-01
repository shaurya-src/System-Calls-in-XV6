#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define MAX 50

int queue_array[MAX];
int rear = -1;
int front = -1;

int main(int num,char *argv[])
{
    int add_item;
    int i;
    add_item=atoi(argv[1]);
    if (rear == MAX - 1)
    printf(1,"Queue Overflow \n");
    else
    {

    if (front == -1)
    /*If queue is initially empty */
    front = 0;
    rear = rear + 1;
    queue_array[rear] = add_item;
    }

    if (front == -1)
        printf(1,"Queue is empty \n");

    else
    {
        printf(1,"Queue value inserted is : \n");
        for (i = front; i <= rear; i++)
            printf(1,"%d ", queue_array[i]);
            printf(1,"\n");
    }

    exit();
}
