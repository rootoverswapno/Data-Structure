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
    node* head=nullptr;
    head=new node;
    head->data=45;
    cout<<head->data<<endl;



    return 0;
}