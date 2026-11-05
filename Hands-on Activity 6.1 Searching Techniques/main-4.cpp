#include <iostream>
#include <cstdlib> //generating random int
#include <time.h> //seeding function
#include "node.h"
#include "searchingAlgo.h"

const int max_size = 50;

int main(){

    int dataset[max_size];
    srand(time(0));
    for(int i = 0; i < max_size; i++){
        dataset[i] = rand();
    }

    std::cout<<"Array result: "<<std::endl;
    for(int i = 0; i < max_size; i++){
        std::cout<<dataset[i]<<" ";
    }
    std::cout<<std::endl;

    
    int userInput;
    std::cout<<"What number to find? ";
    std::cin>>userInput;
    linearSearchArr(max_size, userInput, dataset);

    //create linklist:
    Node<char>* name1 = new_node('S');
    Node<char>* name2 = new_node('A');
    Node<char>* name3 = new_node('Y');
    Node<char>* name4 = new_node('A');

    name1->next = name2;
    name2->next = name3;
    name3->next = name4;

    std::cout<<std::endl;
    std::cout<<"Linked list result LS: "<<std::endl;
    linearSearchLL(name1, 'R');
    linearSearchLL(name1, 'A');

    std::cout<<"\nBinary search Linked List: "<<std::endl;
    Node<int>* num1 = new_node(10);
    Node<int>* num2 = new_node(20);
    Node<int>* num3 = new_node(30);
    Node<int>* num4 = new_node(40);
    Node<int>* num5 = new_node(50);

    num1->next = num2;
    num2->next = num3;
    num3->next = num4;
    num4->next = num5;

    binarySearchLL(num1, 30);

    std::cout<<"\nBinary search Array: "<<std::endl;

    int numbers[] = {10,20,30,40,50};

    binarySearchArray(numbers, 5, 30);


}