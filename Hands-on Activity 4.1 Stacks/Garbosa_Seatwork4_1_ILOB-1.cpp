#include <iostream>

const size_t maxCap = 100;
int stack[maxCap];
int top = -1, newData, elements;

//prototyping
bool isEmpty();
bool isFull();
void push();
void pop();
void Top();
void displayAll();


int main(){

    int choice;

    //asked for the user for the maximum elements to be inserted
    std::cout<<"Enter the number of maximum elements for the new stack (max: 100): ";
    std::cin>>elements;

    while(true){
        std::cout<<"\nStack operations: "<<std::endl;
        std::cout<<"\n1. PUSH\n2. POP\n3. Top\n4. IsEmpty\n5. isFull\n6. Display All"<<std::endl;
        std::cin>>choice;

        switch(choice){
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: Top();
            break;
            case 4: std::cout<<isEmpty()<<std::endl;
            break;
            case 5: std::cout<<isFull()<<std::endl;
            break;
            case 6: displayAll();
            break;
            default: std::cout<<"Invalid Choice Bhoi!"<<std::endl;
            break;

        }
    }
    return 0;
}

bool isEmpty(){
    if(top == -1) return true;
    return false;
}

bool isFull(){
    if(top >= elements -1){
        std::cout<<"Stack Overflow";
        return true;
    }
    return false;
}

void push(){

    //check if the stack is full, if yes return an error
    if(isFull()) return;
    //ask the user for a value to be pushed into the stack
    std::cout<<"Enter number you want to add to the stack: ";
    std::cin>>newData;
    //store inside the stack
    stack[++top] = newData;
    //
}

void pop(){

    //check if there are no more elements inside the stack
    if(isEmpty()) return;
    //display the element to be popped:
    std::cout<<"Popping: "<<stack[top]<<std::endl;
    //decrement top
    top--;
}

void Top(){
    
    //error checking
    if(isEmpty()) return;

    //display the top element
    std::cout<<"The top element is: "<<stack[top]<<std::endl;
}

void displayAll(){
    //check if there are no more elements inside
    if(isEmpty()) return;

    std::cout<<"\nDisplaying All: \n"<<std::endl;
    //display
    for(int i = top; i >= 0; i--){
        std::cout<<stack[i]<<std::endl;
    }
}
