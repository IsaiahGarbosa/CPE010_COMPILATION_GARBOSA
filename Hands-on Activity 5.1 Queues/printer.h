#ifndef PRINTER_H
#define PRINTER_H

#include "job.h"

template <typename T>
class Node{
public:
    T data;
    Node<T>* next;
    Node(T newData);
};

template <typename T>
Node<T>::Node(T newData) : data(newData), next(nullptr) {}

template <typename T>
class Printer{
private:
    Node<T>* front;
    Node<T>* back;
public:
    Printer();
    void addJob(T job);
    void processJob();
    void displayJobs();
    bool isEmpty();
};

template <typename T>
Printer<T>::Printer(){
    front = nullptr;
    back = nullptr;
}

template <typename T>
void Printer<T>::addJob(T job){
    Node<T>* newNode = new Node<T>(job);
    
    if(front == nullptr){
        front = back = newNode;
        return;
    }
    back->next = newNode;
    back = newNode;
}

template <typename T>
void Printer<T>::processJob(){
    if(front == nullptr){
        std::cout<<"No pending jobs"<<std::endl;
        return;
    }
    std::cout<<"\nProcessing job: "<<std::endl;
    front->data.display();
    Node<T>* temp = front;
    front = front->next;

    if(front == nullptr){
        back = nullptr;
    }
    delete temp;
}

template <typename T>
void Printer<T>::displayJobs(){
    if(front == nullptr){
        std::cout<<"No pending jobs"<<std::endl;
        return;
    }
    Node<T>* temp = front;

    std::cout<<"\nPending Jobs: "<<std::endl;
    while(temp != nullptr){
        temp->data.display();
        std::cout<<"--------------------"<<std::endl;
        temp = temp->next;
    }
}

template <typename T>
bool Printer<T>::isEmpty(){
    return front == nullptr;
}

#endif