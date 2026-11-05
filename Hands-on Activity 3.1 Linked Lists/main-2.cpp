#include <iostream>
#include "simply_LL.h"

int main (){

      //creating an empty list
    SimplyList<char>* head = new SimplyList<char>;
    SimplyList<char>* second =  new SimplyList<char>;
    SimplyList<char>* third =  new SimplyList<char>;
    SimplyList<char>* fourth =  new SimplyList<char>;

    //assign the data:
    head-> data = 'S';
    head->next = second;
    second->data = 'A';
    second->next = third;
    third->data = 'Y';
    third->next = fourth;
    fourth->data = 'A';
    fourth->next = nullptr;

    std::cout<<head->data<<std::endl;

    std::cout<<"Original: \n";
    listTraversal(head);

    std::cout<<"\nInserting a new node at the head: \n";
    sllinsertHead('Q',&head);
    listTraversal(head);

    std::cout<<"\nInserting a new node at the  \n";
    sllGeneralInsert('X', head->next->next);
    listTraversal(head);
    


    std::cout<<"\nInserting a new node at the END: \n";
    sllInsertEnd('U',&head);
    listTraversal(head);

    std::cout<<"\nDeleting a node \n";
    sllDeleteNode('X',&head);
    listTraversal(head);

    std::cout<<"\nDeleting the head node \n";
    sllDeleteNode('Q',&head);
    listTraversal(head);

    std::cout<<"\nDeleting the all the nodes:\n";
    sllDeleteList(&head);
    listTraversal(head);

    dllGeneralInsert('A', head->next->next);

    
    return 0;
}

