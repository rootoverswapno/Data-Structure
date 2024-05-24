#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   struct node* link;
};

void insert(struct node*&head,int data)
{
    struct node*temp=new node;
    temp->data=data;
    temp->link=NULL;
    if(head==NULL)
    {
        head=temp;
        return;
    }
    else
    {
       struct node *last=head;
       while(last->link!=NULL)
       {
        last=last->link;
       }      
       last->link=temp;
    }
}
void printlist(struct node *ptr)
{
    int i=1;
    while(ptr!=NULL)
    {
        cout<<"Element are "<<i<<" : "<<ptr->data<<endl;
        ptr=ptr->link;
        i++;
    }
}
int main()
{
    struct node *head=NULL;
    while(true)
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            break;
        }
        insert(head,x);
    }

      printlist(head);
  

    struct node* current = head;
    struct node* next = nullptr;
    while (current != nullptr) {
        next = current->link;
        delete current;
        current = next;
    }



    return 0;
}