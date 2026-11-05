#include <iostream>
#include "queueLL.h"

int main (){

    qNode<char>* front = nullptr;
    qNode<char>* back = nullptr;

    enqueue('J', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
    enqueue('O', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
    enqueue('M', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;

    dequeue(&front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
    dequeue(&front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;

    enqueue('O', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
    enqueue('P', &front, &back);
    std::cout<<front->data<<" "<<back->data<<std::endl;
   
    checkFront(front);
    checkBack(back);
    display(front);
    return 0;
}