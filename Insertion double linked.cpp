#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*ptr,*head,*tail,*temp,*t;
void CreationNode(int n)
{
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = n;
    ptr->next = NULL;
    ptr->prev = NULL;
    if(head==NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {
        tail -> next = ptr;
        ptr -> prev = tail;
        tail = ptr;
    }
}
void firstin(int n)
{
    temp = head;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = n;
    temp -> prev = ptr;
    ptr -> next = temp;
    ptr -> prev = NULL;
    head = ptr;
}
void lastin(int n)
{
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = n;
    temp -> next = ptr;
    ptr -> prev = temp;
    ptr -> next = NULL;
}
void posin(int p,int d)
{
    temp = head;

    ptr = (struct node*)malloc(sizeof(struct node));

    ptr -> data = d;

    for(int i=0;i<p;i++)
    {
        t = temp;
        temp = temp->next;
    }

    t -> next = ptr;
    ptr -> prev = t;

    temp -> prev = ptr;
    ptr -> next = temp;

}
void display()
{
    temp = head;
    while(temp->next != NULL)
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
