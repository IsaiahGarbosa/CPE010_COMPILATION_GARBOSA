#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

const int size = 100;

int main(){
    int arr[size];

    srand(time(0));
    
    for(int i = 0; i< size; i++){
        arr[i] = rand() % 10+1;
    }

    std::cout<<"Original Array: ";
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"\nShell Sort: ";
    shellSort(arr, size);
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"\nMerge Sort: ";
    mergeSort(arr, 0, size-1);
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"\nQuick Sort: ";
    mergeSort(arr, 0, size-1);
    displayArray(arr, size);

}