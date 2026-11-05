#ifndef stacklist_H
#define stacklist_H

#include <string>

template <typename T>
class Node{
    public:
    T data;
    Node<T>* next = nullptr;
};

// global
template <typename T>
Node<T>* head = nullptr;

//pushing operation
template <typename T>
void push(T newdata){
    Node<T>* newNode = new Node<T>;
    newNode->data = newdata;
    newNode->next = head<T>;
    head<T> = newNode;
}

template <typename T>
bool isEmpty(){
    return head<T> == nullptr;
}

template <typename T>
T pop(){
    //if the stack is empty
    if(isEmpty<T>()){
        std::cout<<"Stack Underflow"<<std::endl;
    }
    //saving current top node for temp variable
    Node<T>* temp = head<T>;
    //store the data to a temp varaible
    T tempVal = temp->data;
    //save head to next node
    head<T> = head<T>->next;
    //free up memory
    delete temp;
    //return temp var data
    return tempVal;
}

template <typename T>
bool checkBalance(std::string expression)
{
    head<T> = nullptr;      // reset stack

    for (char symbol : expression)
    {
        if (symbol == '(' || symbol == '{' || symbol == '[')
        {
            push<T>(symbol);
        }
        else if (symbol == ')' || symbol == '}' || symbol == ']')
        {
            if (isEmpty<T>())
                return false;

            char open = pop<T>();

            if ((symbol == ')' && open != '(') ||
                (symbol == '}' && open != '{') ||
                (symbol == ']' && open != '['))
            {
                return false;
            }
        }
    }

    return isEmpty<T>();
}

#endif
