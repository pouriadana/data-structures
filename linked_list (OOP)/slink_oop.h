#ifndef SLNK_OOP
#define SLNK_OOP

template<typename T>
class List {
    public:
        List(T val);
        void push(T val);
        typename List<T>::Node *get() const;
    private:
        struct Node {
            T val;
            Node *next;
        };
        Node *head = nullptr;
};

template<typename T>
List<T>::List(T val) 
{
    head = new Node{val, nullptr};
}

template<typename T>
void List<T>::push(T val) {
    Node *new_node = new Node{val, nullptr}; 
    Node *t = head;
    while (t->next != nullptr) {
        t = t->next;
    }
    t->next = new_node;
}

template<typename T>
typename List<T>::Node *List<T>::get() const 
{
    return head;
}

#endif 