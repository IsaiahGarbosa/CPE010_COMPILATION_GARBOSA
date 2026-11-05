#include <iostream>
#include <cstdlib>
#include <time.h>
#include "vote.h"

const int size = 100;

int main(){
    int arr[size];

    srand(time(0));

    for(int i = 0; i < size; i++){
        arr[i] = rand() % 5 + 1;
    }

    std::cout<<"Original List of Votes: ";
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"\nSorted List: ";
    bubbleSort(arr, size);
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"\nCandidate 1: ";
    std::cout<<countVotes(arr, size, 1)<<std::endl;
    std::cout<<"Candidate 2: ";
    std::cout<<countVotes(arr, size, 2)<<std::endl;
    std::cout<<"Candidate 3: ";
    std::cout<<countVotes(arr, size, 3)<<std::endl;
    std::cout<<"Candidate 4: ";
    std::cout<<countVotes(arr, size, 4)<<std::endl;
    std::cout<<"Candidate 5: ";
    std::cout<<countVotes(arr, size, 5)<<std::endl;

}
