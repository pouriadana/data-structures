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

void print_list(Node *head)
// given the head of a linked list, 
// it will print each node's value
// on a line
{
    while (head != nullptr) {
        std::cout << head->val << '\n';
        head = head->next;
    }
}

int main()
{
    int n;
    Node *head = nullptr;
    Node *tail = nullptr;
    while (std::cin >> n) {
        tail = add_node_to_tail(head, n);
    }
    print_list(head);
}