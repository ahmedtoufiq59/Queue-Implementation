//Queue Implementation using array::
#include<iostream>
using namespace std;
#define max 5
int queue[max];
int front=-1, rare=-1;
void enqueue(int data)
{
    if(rare==max-1)
    {
        cout<< "Queue overflow\n";
    }
    else if(front==-1&& rare==-1)
    {
        front=0;
        rare=0;
        queue[rare]=data;
    }
    else
    {
        rare++;
        queue[rare]=data;
    }
}

void dequeue()
{
    if(front==-1 && rare==-1)
    {
        cout<< "Queue underflow\n";
    }
    else if(front== rare)
    {
        front=-1;
        rare=-1;
    }
    else
    {
        cout<< "Dequeue: " << queue[front] << endl;
        front++;
    }
}
void display()
{
    if(front==-1 && rare==-1)
    {
        cout<< "Causing Underflow";
    }
    else
    {
        cout<< "The current queue state is : ";
        for(int i=front;i<=rare;i++)
        {
            cout<< queue[i]<< "  ";
        }
        cout<< endl;
    }
}
int main()
{
    dequeue();
    enqueue(5);
    enqueue(8);
    enqueue(21);
    enqueue(15);
    enqueue(19);
    dequeue();
    dequeue();
    display();
    return 0;
}
