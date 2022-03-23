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
void firstdel()
{
    temp = head;
    head = temp->next;
    temp -> next = NULL;
    head -> prev = NULL;
}
void lastdel()
{
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp -> prev -> next = NULL;
}
void posdel(int p)
{
    temp = head;

    for(int i=0;i<p;i++)
    {
        t = temp;
        temp = temp->next;
    }

    t -> next = temp -> next;
    temp -> next -> prev = t;
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
    firstdel();
    display();
    lastdel();
    display();
    posdel(3);
    display();
    return 0;
}

