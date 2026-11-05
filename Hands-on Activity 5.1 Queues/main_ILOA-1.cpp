#include <iostream>
#include <queue>

void display(std::queue<char> copyQ);


int main(){
    //create an object
    std::queue<char> myQ;

    myQ.push('S');
    myQ.push('A');
    myQ.push('Y');
    myQ.push('A');
    display(myQ);
    //try all member function
    //empty
    std::cout<<"Is list empty?: "<<myQ.empty()<<std::endl;
    //size
    std::cout<<"Size of queue: "<<myQ.size()<<std::endl;
    //front
    std::cout<<"Front of queue: "<<myQ.front()<<std::endl;
    //back
    std::cout<<"Back of queue: "<<myQ.back()<<std::endl;
    //pop
    std::cout<<"Popping: S"<<std::endl;
    myQ.pop();
    //display
    display(myQ);
    //push
    myQ.push('H');
    std::cout<<"Pushing: H"<<std::endl;
    //display
    display(myQ);

    return 0;
}
void display(std::queue<char> copyQ){
    //creates a copy of the queue that was passed
    std::queue<char> c = copyQ;
    while(!c.empty()){
        std::cout<<" "<<c.front();
        c.pop();
    }
    std::cout<<"\n";
}
