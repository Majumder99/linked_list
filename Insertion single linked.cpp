//#include<bits/stdc++.h>
//using namespace std;
//struct node
//{
//    int data;
//    struct node *next;
//}*ptr,*head,*tail,*temp;
//void CreationNode(int n)
//{
//    ptr = (struct node *)malloc(sizeof(struct node));
//    ptr->data = n;
//    ptr->next = NULL;
//    if(head==NULL)
//    {
//        head = ptr;
//        tail = ptr;
//    }
//    else
//    {
//        tail -> next = ptr;
//        tail = ptr;
//    }
//}
//void firstin(int n)
//{
//    temp = head;
//    ptr = (struct node*)malloc(sizeof(struct node));
//    ptr -> data = n;
//    ptr -> next = temp;
//    head = ptr;
//}
//void lastin(int n)
//{
//    temp = head;
//    while(temp->next != NULL)
//    {
//        temp = temp->next;
//    }
//    ptr = (struct node*)malloc(sizeof(struct node));
//    ptr -> data = n;
//    ptr -> next = NULL;
//    temp->next = ptr;
//}
//void posin(int p,int d)
//{
//    temp = head;
//
//    ptr = (struct node*)malloc(sizeof(struct node));
//
//    ptr -> data = d;
//
//    for(int i=0;i<p-1;i++)
//    {
//        temp = temp->next;
//    }
//    ptr -> next = temp->next;
//    temp -> next = ptr;
//}
//void display()
//{
//    temp = head;
//    while(temp->next != NULL)
//    {
//        cout << temp->data << " ";
//        temp = temp->next;
//    }
//    cout << temp->data << endl;
//}
//int main()
//{
//    int d,n;
//    cin >> d;
//    for(int i=0; i<d; i++)
//    {
//        cin >> n;
//        CreationNode(n);
//    }
//    display();
//    firstin(5);
//    display();
//    lastin(10);
//    display();
//    posin(2,22);
//    display();
//    return 0;
//}
//
#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
}*ptr,*head,*tail,*temp;
void CreationNode(int n)
{
    ptr = new node();
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
    }
}
void firstin(int n)
{
    temp = head;
    ptr = new node();
    ptr -> data = n;
    ptr -> next = temp;
    head = ptr;
}
void lastin(int n)
{
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr = new node();
    ptr -> data = n;
    ptr -> next = NULL;
    temp->next = ptr;
}
void posin(int p,int d)
{
    temp = head;

    ptr = new node();

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
    firstin(5);
    display();
    lastin(10);
    display();
    posin(2,22);
    display();
    return 0;
}

