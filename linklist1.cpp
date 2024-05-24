#include<bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    struct node *link;
};

int main()
{
     struct  node *head;
     head=new node;
     head->data=12;
     head->link=nullptr;
     struct node *current=new node;
     current->data=45;
     current->link=NULL;
     head->link=current;
     cout<<head->data<<endl;



    return 0;
}