#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*ptr,*head,*tail,*temp;
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
    }
}
void Reverse()
{
        struct node* current = head;
        struct node *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
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
    Reverse();
    display();
    return 0;
}
