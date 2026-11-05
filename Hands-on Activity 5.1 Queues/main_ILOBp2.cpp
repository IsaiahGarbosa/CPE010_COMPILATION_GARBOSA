#include <iostream>
#include "queueArr.h"

int main(){

    QueueArray<char> queue(5);

    //Enqueue
    queue.Enqueue('S');
    queue.Enqueue('A');
    queue.Enqueue('Y');
    queue.Enqueue('A');

    std::cout<<"Front: "<<queue.Front()<<std::endl;
    std::cout<<"Back: "<<queue.Back()<<std::endl;
    std::cout<<"Size: "<<queue.Size()<<std::endl;

    //Dequeue
    queue.Dequeue();

    std::cout<<"\nAfter Dequeue"<<std::endl;
    std::cout<<"Front: "<<queue.Front()<<std::endl;
    std::cout<<"Back: "<<queue.Back()<<std::endl;
    std::cout<<"Size: "<<queue.Size()<<std::endl;

    queue.Clear();

    std::cout<<"\nAfter Clear"<<std::endl;
    std::cout<<"Front: "<<queue.Front();
    std::cout<<"Back: "<<queue.Back();
    std::cout<<"Size: "<<queue.Size()<<std::endl;



    return 0;
}