#include <iostream>

struct Node {
    int val;
    Node *next;
};

Node* create_node(int val) {
    Node *n = new Node;
    n->val = val;
    n->next = nullptr;
    return n;
}

Node* add_node_to_tail(Node*& head, int val) 
// create new node at the end of the list
// return the last node
// leave the head node untouched
{
    Node *temp = new Node;
    temp->val = val;
    temp->next = nullptr;
    if (head == nullptr) {
        head = temp;
        return head;
    }

    Node *p = head;
    while (p->next != nullptr) {
        p = p->next;
    }

    p->next = temp;
    return temp;
}

int main()
{
    // Node *head = nullptr;
    // int n;
    // while (std::cin >> n) {
    //     add_node_to_tail(head, n);
    // }
    // Node *p = head;
    // while (p != nullptr) {
    //     std::cout << p->val << '\n';
    //     p = p->next;
    // }
    int n;
    Node *head2 = nullptr;
    Node *tail = nullptr;
    while (std::cin >> n) {
        tail = add_node_to_tail(head2, n);
    }
    std::cout << "Tail: " << tail->val;
    std::cout << "\nHead: " << head2->val;
    // Node *p = head2;
    // while (p != nullptr) {
    //     std::cout << p->val << '\n';
    //     p = p->next;
    // }
}