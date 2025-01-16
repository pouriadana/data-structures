#ifndef SLINK
#define SLINK
#include <iostream>
struct Node {
    int val;
    Node *next;
};
Node *add_node_to_tail(Node*& head, int val);
Node *add_node_to_start(Node *&head, int val);
Node *search_list(Node *head, int val);
void print_list(Node *head);
void delete_list(Node *&header);
void remove_node(Node *&head, int val);
#endif