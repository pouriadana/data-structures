#include "slink.h"

Node *create_node(int val) {
    Node *n = new Node;
    n->val = val;
    n->next = nullptr;
    return n;
}

Node *add_node_to_tail(Node*& head, int val) 
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

Node *add_node_to_start(Node *&head, int val)
// given linked list, add a node to its beginning
{
    Node *temp = new Node;
    temp->next = head;
    temp->val = val;
    head = temp;
    return head;

}

Node *search_list(Node *head, int val)
// given a linked list and a value, 
// return the node containing the value
// or return nullptr
{
    Node *address = nullptr;
    for (; head != nullptr; head = head->next) {
        if (head->val == val) {
            address = head;
            break;
        }
    }
    return address;
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

void delete_list(Node *&header)
// delete all nodes in a linked list
{
    Node *current = header;
    while (current != nullptr) {
        Node *temp = current->next;
        delete current;
        current = temp;
    }
    header = nullptr;
}

void remove_node(Node *&head, int val)
// given a linked list and a value,
// remove the node containing that 
// value. If the value is absent, don't
// do anything
{
    Node *node = search_list(head, val); 
    if (head == node) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    else if ( node != nullptr) {
        Node *t = head;
        while (t->next != node) {
            t = t->next;
        }
        t->next = node->next;
        delete node;
    }
}