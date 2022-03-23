#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*ptr,*head,*tail,*temp,*t;
void CreationNode(int n)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = NULL;
    if(head==NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {
        tail -> next = ptr;
        tail = ptr;
        tail -> next = head;
    }
}
void firstin(int n)
{
    temp = head;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = n;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    ptr -> next = NULL;
    ptr -> next = head;
    temp -> next = ptr;
    head = ptr;
}
void lastin(int n)
{
    temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = n;
    temp -> next = ptr;
    ptr -> next = head;
}
void posin(int p,int d)
{
    temp = head;

    ptr = (struct node*)malloc(sizeof(struct node));

    ptr -> data = d;

    for(int i=0;i<p-1;i++)
    {
        temp = temp->next;
    }
    ptr -> next = temp->next;
    temp -> next = ptr;
}
void display()
{
    temp = head;
    while(temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}
int main()
{
    int d,n;
    cin >> d;
    for(int i=0; i<d; i++)
    {
        cin >> n;
        CreationNode(n);
    }
    display();
    firstin(10);
    display();
    lastin(20);
    display();
    posin(3,50);
    display();
    return 0;
}

