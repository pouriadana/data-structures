#include <iostream>
#include "slink.h"

int main()
{
    int n;
    Node *head = nullptr;
    Node *tail = nullptr;
    while (std::cin >> n) {
        tail = add_node_to_tail(head, n);
    }
    add_node_to_start(head, 17);
    print_list(head);
    delete_list(head);
}