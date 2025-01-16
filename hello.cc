#include <iostream>
#include <limits>
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
    std::cout << "Enter a value to search: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> n;
    Node *qans = search_list(head, n);
    if (qans != nullptr) {
        std::cout << "Found!\n";
    }
    else {
        std::cout << "Not found";
    }
    delete_list(head);
}