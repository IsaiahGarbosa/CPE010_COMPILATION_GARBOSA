#ifndef stackarray_H
#define stackarray_H

#include <string>
#include <iostream>


class stackArray{
private:
    static const size_t maxCap = 100;
    char stack[maxCap];
    int top = -1, elements;
    char newData;
public:
    bool isEmpty(){
        if(top == -1) return true;
        return false;
    }

    void push(){
        stack[++top] = newData;
    }

    char pop() {
            if (top >= 0) {
                return stack[top--];
            }
            return '\0';
        }

    bool checkBalance(std::string expression)
    {
        top = -1;      // reset stack

        for (char symbol : expression)
        {
            if (symbol == '(' || symbol == '{' || symbol == '[')
            {
                newData = symbol;
                push();
            }
            else if (symbol == ')' || symbol == '}' || symbol == ']')
            {
                if (isEmpty())
                    return false;

                char open = pop();

                if ((symbol == ')' && open != '(') ||
                    (symbol == '}' && open != '{') ||
                    (symbol == ']' && open != '['))
                {
                    return false;
                }
            }
        }

        return isEmpty();
    }
};

#endif