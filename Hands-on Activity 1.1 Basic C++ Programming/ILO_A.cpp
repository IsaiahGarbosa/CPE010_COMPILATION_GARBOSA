#include <iostream>


int sumOfTwoNum(int fNum, int sNum);
bool greaterThan(int numA, int numB);
bool operations(int x, int y);


int main()
{


    int fNum, sNum, numA, numB, x, y;


    //Create a function that will take two numbers and display the sum.


    std::cout << "Enter first number: " << std::endl;
    std::cin >> fNum;


    std::cout << "Enter second number: " << std::endl;
    std::cin >> sNum;


    std::cout << "\nThe sum of the two number is "<<sumOfTwoNum(fNum,sNum)<< std::endl;


    //Create a function that will return whether variable A is greater than variable B.
    std::cout << "\nEnter first number: " << std::endl;
    std::cin >> numA;


    std::cout << "Enter second number: " << std::endl;
    std::cin >> numB;


    if(greaterThan(numA,numB)){
        std::cout << "\nNumber A is greater than number B " << std::endl;
    }
    else{
        std::cout << "\nNumber A is NOT greater than number B " << std::endl;
    };


    //Create a function that will take two Boolean values and display the result of all logical operations then return true if it was a success.
    std::cout << "\nEnter first number: " << std::endl;
    std::cin >> x;


    std::cout << "Enter second number: " << std::endl;
    std::cin >> y;


    std::cout<<operations(x,y);


};


int sumOfTwoNum(int fNum, int sNum){
    int sum = fNum + sNum;
    return sum;
};


bool greaterThan(int numA, int numB){
   
    return numA > numB;


};


bool operations(int x, int y){
    std::cout<< "\nLogical Operations:"<<std::endl;
    std::cout<< "\nAND (x && y): "<< (x && y) << std::endl;
    std::cout<< "OR (x || y): "<< (x || y) << std::endl;
    std::cout<< "NOT (!x): "<< (!x) << std::endl;
    std::cout<< "NOT (!y): "<< (!y) << std::endl;


    return true;
};

