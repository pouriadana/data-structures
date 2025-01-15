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

// Node* add_node_to_tail(Node* head, int val) {
//     while (head->next != nullptr) {
//         head = head->next;
//     }
//     Node *temp = new Node;
// }

int main()
{
    Node *head = create_node(7);
    Node *head2 = create_node(17);
    std::cout << head->val << '\t'
              << head->next
              << '\n'
              << head2->val << '\t'
              << head2->next
              << '\n';
}