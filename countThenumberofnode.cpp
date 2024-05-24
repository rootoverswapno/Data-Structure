#include <bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int ct=0;
    if(head==NULL)
    {
        cout<<"Linklist is empty";
    }
    struct node *ptr=NULL;
    ptr=head;
    while(ptr!=NULL)
    {
        ct++;
        ptr=ptr->link;
    }
    cout<<ct<<endl;
}
void print_data(struct node *head)
{
    if(head==NULL)
    {
        cout<<"Linklist is empty ";
    }
    else
    {
        struct node *ptr=NULL;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<endl;
            ptr=ptr->link;
        } 
    }
}


int main()
{
    // create first node
    struct node *head;
    head = new node;
    head->data = 12;
    head->link = nullptr;
    
    // create second node
    struct node *current = new node;
    current->data = 45;
    current->link = NULL;
    head->link = current;
    // cout << current->data << endl;
    // create third node
    // struct node *current ;
    current=new node;
    current->data = 450;
    current->link = NULL;
    head->link->link = current;
    
    // cout << head->data << endl;
    // cout << current->data << endl;
    // output of all three node
    // cout << head->data << endl;
    // cout << current->data << endl;
    // cout << current->data << endl;
    count_of_nodes(head);
    print_data(head);

    return 0;
}