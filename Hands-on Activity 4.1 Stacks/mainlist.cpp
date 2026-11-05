#include <iostream>
#include <string>
#include "stacklist.h"

int main()
{
    std::string expression;

    std::cout << "Enter an expression: ";
    std::cin >> expression;

    if (checkBalance<char>(expression))
        std::cout << "Balanced Symbols\n";
    else
        std::cout << "Not Balanced\n";

    return 0;
}
