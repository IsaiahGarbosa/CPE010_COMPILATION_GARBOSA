#include <iostream>
#include "simply_LL.h"
#include "doubly_LL.h"

int main(){

    DoubleList<char>* head = createNode('C');
    DoubleList<char>* second = createNode('P');
    DoubleList<char>* third = createNode('E');

    head->next = second;
    second->prev = head;

    second->next = third;
    third->prev = second;

    std::cout<<"Traversal Testing: "<<std::endl;
    dllTraverse(head);

    std::cout<<"Insert Head Testing: "<<std::endl;
    dllInsertHead('X', &head);
    dllTraverse(head);

    std::cout<<"Insert End Testing: "<<std::endl;
    dllInsertEnd('1', head);
    dllTraverse(head);

    std::cout<<"General Insert Testing: "<<std::endl;
    dllGeneralInsert('B', head->next->next);
    dllTraverse(head);

    std::cout<<"Delete Node Testing: "<<std::endl;
    dllDeleteNode('C', &head);
    dllTraverse(head);

    return 0;
}