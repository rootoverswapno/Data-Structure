#include <bits/stdc++.h>
using namespace std;
struct node
{
    /* data */
    int data;
    struct node *link;
};

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
    cout << current->data << endl;
    // create third node
    // struct node *current ;
    current=new node;
    current->data = 450;
    current->link = NULL; 
    head->link->link = current;

    cout << head->data << endl;
    cout << current->data << endl;
    // output of all three node
    // cout << head->data << endl;
    // cout << current->data << endl;
    // cout << current->data << endl;

    return 0;
}