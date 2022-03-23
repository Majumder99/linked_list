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
void firstdel()
{
    temp = head;
    while(temp->next != head)
    {
        temp = temp->next;
    }
    head = head -> next;
    temp -> next = head;
}
void lastdel()
{
    temp = head;
    while(temp->next != head)
    {
        t=temp;
        temp = temp->next;
    }
    t -> next = head;
    temp -> next = NULL;
}
void posdel(int p)
{
    temp = head;
    for(int i=0;i<p && temp->next!=NULL ; i++)
    {
        t = temp;
        temp = temp->next;
    }
    t->next = temp->next;
    temp->next = NULL;
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
    firstdel();
    display();
    lastdel();
    display();
    posdel(3);
    display();
    return 0;
}
