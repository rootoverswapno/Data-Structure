#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* link;
};

void add_node(Node*& head, int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->link = nullptr;

    if (head == nullptr) {
        head = temp;
    } else {
        Node* ptr = head;
        while (ptr->link != nullptr) {
            ptr = ptr->link;
        }
        ptr->link = temp;
    }
}

void print(Node* head) {
    if (head == nullptr) {
        cout << "Linked list is empty";
    } else {
        Node* p = head;
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->link;
        }
    }
    cout << endl; // To ensure output ends with a newline
}

int main() {
    Node* head = nullptr;
    int ct = 1;
    for (int i = 0; i < ct; ++i) {
        int x;
        cin >> x;
        if (x == -1) {
            break;
        }

        add_node(head, x);
        ct++;
    }
    print(head);

    return 0;
}
