#ifndef NODE_H
#define NODE_H

template <typename T>

class Node{
public:
    T data;
    Node *next;
};

template <typename T>
Node<T> *new_node(T newData){
    Node<T> *newNode = new Node<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

template <typename T>
void linearSearchLL(Node<T>* head, T dataFind){
    while(head != nullptr){
        if(head->data == dataFind){
            std::cout<<"Searching is successful.\n";
            return;
        }
        head = head->next;
    }
    std::cout<<"Searching is Unsuccessful"<<std::endl;
};

#endif