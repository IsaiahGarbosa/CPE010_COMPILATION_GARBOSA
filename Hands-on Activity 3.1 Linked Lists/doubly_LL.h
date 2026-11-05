#ifndef DOUBLE_LL_H
#define DOUBLE_LL_H

template <typename T>
class DoubleList{
    public:
    T data;
    DoubleList<T>* prev = nullptr;
    DoubleList<T>* next = nullptr;
};

template <typename T>
DoubleList<T>* createNode(T newData){
    DoubleList<T> *newNode = new DoubleList<T>;
    newNode->data = newData;
    newNode->prev = nullptr;
    newNode->next = nullptr;

    return newNode;
}

template <typename T>
void dllTraverse(DoubleList<T> *currentNode){

    DoubleList<T> *tail;

    std::cout<<"Forward: "<<std::endl;

    while(currentNode != nullptr){
        std::cout<<currentNode->data<<" ";
        tail = currentNode;
        currentNode = currentNode->next;
    }

    std::cout<<"\nBackward: "<<std::endl;
    while(tail != nullptr){
        std::cout<<tail->data<<" ";
        tail = tail->prev;
    }
    std::cout<<std::endl;

}

template <typename T>
void dllInsertHead(T newData, DoubleList<T>** currentHead){
    //create a node
    DoubleList<T>* newNode = createNode(newData);
    newNode->next = *currentHead;
    (*currentHead)->prev = newNode;

    //update header pointer
    *currentHead = newNode;

}

template <typename T>
void dllInsertEnd(T newData, DoubleList<T> *currentHead){
    //create a new node
    DoubleList<T>* newNode = createNode(newData);
    //traverse to the last node
    while(currentHead->next != nullptr){
        currentHead = currentHead->next;
    }
    //connect the last node to the new node
    currentHead->next = newNode;
    //connect the new node back to the last node
    newNode->prev = currentHead;
}

//insertion at any code
template<typename T>
void dllGeneralInsert(T newData, DoubleList<T>* currentNode){
    DoubleList<T>* newNode = createNode(newData);

    newNode->next = currentNode->next;
    newNode->prev = currentNode;
     
    if (newNode->next != nullptr) {
        newNode->next->prev = newNode;
    }
    currentNode->next = newNode;
}

//deletion of a data
template<typename T>
void dllDeleteNode(T findData, DoubleList<T>** head){
    if(*head == nullptr){
        std::cout<<"List is empty"<<std::endl;
        return;
    }

    DoubleList<T>* currentNode = *head;

    while(currentNode != nullptr && currentNode->data != findData){
        currentNode = currentNode->next;
    }

    if(currentNode == nullptr){
        std::cout<<"Data not found"<<std::endl;
        return;
    }

    if(currentNode->prev != nullptr){
        currentNode->prev->next = currentNode->next;
    } else {
        *head = currentNode->next;
    }

    if (currentNode->next != nullptr) {
        currentNode->next->prev = currentNode->prev;
    }

    delete currentNode;

}

#endif