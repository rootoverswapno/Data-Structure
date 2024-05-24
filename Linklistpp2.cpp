#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node* link;
};
void printlist(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element are : "<<ptr->data<<endl;
        ptr=ptr->link;
    }
}

int main()
{
    struct node *head,*second,*third,*fourth;
    head=new node;
    second=new node;
    third=new node;
    fourth=new node;

    head->data=10;
    head->link=second;

    second->data=20;
    second->link=third;

    third->data=30;
    third->link=fourth;

    fourth->data=40;
    fourth->link=NULL;

    printlist(head);




    return 0;
}