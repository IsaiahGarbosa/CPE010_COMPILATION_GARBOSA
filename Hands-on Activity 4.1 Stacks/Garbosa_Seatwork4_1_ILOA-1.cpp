#include <iostream>
#include <stack>

int main(){

    std::stack<int> newStack;

    std::cout<<"is the stack empty? "<< newStack.empty()<<std::endl;

    //inseart a 3 elements
    newStack.push(3);
    std::cout<<"Top of stack: "<< newStack.top()<<std::endl;
    newStack.push(2);
    std::cout<<"Top of stack: "<< newStack.top()<<std::endl;
    newStack.push(1);
    std::cout<<"Top of stack: "<< newStack.top()<<std::endl;

    std::cout<<"is the stack empty? "<< newStack.empty()<<std::endl;
    newStack.push(6);
    newStack.push(7);
    newStack.push(8);

    std::cout<<"Size of the stack is: "<< newStack.size()<<std::endl;

    //swap -> swap the content of the public member functions 

    std::stack<int> stack1;
    std::stack<int> stack2;

    std::cout<<"\nSwap\n";

    stack1.push(67);
    stack1.push(69);

    stack2.push(55);
    stack2.push(76);

    std::cout<<"\nBefore:"<<std::endl;
    std::cout<<"Top of stack 1: "<< stack1.top()<<std::endl;
    std::cout<<"Top of stack 2: "<< stack2.top()<<std::endl;

    stack1.swap(stack2);
    std::cout<<"\nAfter:"<<std::endl;
    std::cout<<"Top of stack 1: "<< stack1.top()<<std::endl;
    std::cout<<"Top of stack 2: "<< stack2.top()<<std::endl;

    //emplace -> construct and insert element -> public member function
    std::cout<<"\nEmplace\n";
    newStack.emplace(9);
    std::cout<<"Top of stack: "<< newStack.top()<<std::endl;

    return 0;
}