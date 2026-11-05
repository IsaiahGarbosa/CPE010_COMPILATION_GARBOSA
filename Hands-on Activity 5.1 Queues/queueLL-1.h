#ifndef QUEUELL_H
#define QUEUELL_H

template <typename T>
class qNode{
    public:
        T data;
        qNode<T>* next;
};

//creates the new node
template <typename T>
qNode<T>* new_node(T newData){
    qNode<T>* newNode = new qNode<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    return newNode;
}

//enqueue operation
template<typename T>

void enqueue(T newData, qNode<T>** frontPtr, qNode<T>** backPtr){
    //create the new node
    qNode<T>* newNode = new_node(newData);
    //inserting into an empty queue
    if((*frontPtr) == nullptr && (*backPtr)==nullptr){
        (*frontPtr) = newNode;
        (*backPtr) = newNode;
    }

    //inseting an item into a non empty queue
    (*backPtr)->next = newNode;
    (*backPtr) = newNode;
}

template<typename T>
void dequeue(qNode<T>** frontPtr, qNode<T>** backPtr){
    //crete a temp node
    qNode<T>* deleteNode = nullptr; //temp var
    deleteNode = (*frontPtr);
    //add a check if the queue is already empty
    if((*frontPtr)== nullptr && (*backPtr)==nullptr){
        std::cout<<"the queue is empty\n";
    }
    //check if the queue as only has 1 node
    if((*frontPtr)->next == nullptr && (*backPtr)->next == nullptr){
        (*frontPtr) = nullptr;
        (*backPtr) = nullptr;
        delete deleteNode;
        return;
    };
    //delete the node
    (*frontPtr) = (*frontPtr)->next;
    deleteNode->next = nullptr;
    delete deleteNode;
}

//check the front
template<typename T>
void checkFront(qNode<T>* front){
    if(front == nullptr){
        std::cout<<"List empty"<<std::endl;
    }
    std::cout<<"The front is: "<<front->data<<std::endl;
}

//check the back
template<typename T>
void checkBack(qNode<T>* back){
    if(back == nullptr){
        std::cout<<"List empty"<<std::endl;
    }
    std::cout<<"The back is: "<<back->data<<std::endl;
}

//display all
template<typename T>
void display(qNode<T>* front){
    if(front == nullptr){
        std::cout<<"List empty"<<std::endl;
    }
    qNode<T>* temp = front;
    std::cout<<"Displaying: ";
    while(front != nullptr){
        std::cout<<front->data<<" ";
        front = front->next;
    }
}
#endif
