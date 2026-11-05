#include <iostream>
#include "liststack.h"

int main (){

    std::cout<<"-----Pushing 'I' 'E' 'E' 'E' -----\n";

    //pushing
    push('I');
    push('E');
    push('E');
    push('E');
 
    //display top
    Top<char>();

    //display all elements
    std::cout<<"\n\nDisplaying All Elements: "<<std::endl;
    DisplayAll<char>();

    //pop and print each element
    std::cout<<"\n-----popping 'E' 'E' 'E' 'I' -----\n";
    while(!isEmpty<char>()){
        std::cout<<"popping: "<<pop<char>()<<std::endl;
    }

    //test stack underflow
    pop<char>();

    return 0;
}