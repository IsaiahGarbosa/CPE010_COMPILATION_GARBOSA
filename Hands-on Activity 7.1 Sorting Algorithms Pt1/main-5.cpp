#include <iostream>
#include <cstdlib>
#include <time.h>
#include "sorting.h"

const int size = 100;

int main (){
    
    int arr[size];

    srand(time(0));
    
    for(int i = 0; i< size; i++){
        arr[i] = rand() % 5+1;
    }

    std::cout<<"Array: "<<std::endl;
    displayArray(arr, size);

    std::cout<<std::endl;

    std::cout<<"Bubble Sort: \n";
    bubbleSort(arr, size);
    displayArray(arr,size);

    std::cout<<std::endl;

    std::cout<<"Selection sort: \n";
    selectionSort(arr, size);
    displayArray(arr,size);

    std::cout<<std::endl;

    std::cout<<"Insertion sort: \n";
    insertionSort(arr, size);
    displayArray(arr,size);
}
