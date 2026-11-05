#include <iostream>
#include <string>
#include "stackarray.h"

int main(){
    stackArray stack;
    std::string expression;

    std::cout << "Enter an expression: ";
    std::cin>> expression;

    if (stack.checkBalance(expression))
        std::cout << "Balanced Symbols";
    else
        std::cout << "Not Balanced";

    return 0;
}

