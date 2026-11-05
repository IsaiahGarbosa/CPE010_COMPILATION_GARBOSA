#ifndef liststack_H
#define liststack_H

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
void Top(){\
    //what if the stack is empty
    if(isEmpty<T>())return;
    std::cout<<"The top is: "<<head<T>->data;
}

template<typename T>
void DisplayAll(){

    if(isEmpty<T>())return;

    Node<T>* temp = head<T>;
    while(head<T> != nullptr){    
        
        std::cout<<head<T>->data<<" ";
        head<T> = head<T>->next;
    }

    std::cout<<std::endl;


}

#endif
