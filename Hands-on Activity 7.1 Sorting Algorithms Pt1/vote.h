#ifndef VOTE_H
#define VOTE_H

#include <iostream>

template<typename T>
void displayArray(T arr[], int size){
    for(int i = 0; i < size; i++){
        std::cout<<arr[i]<<" ";
    }
}

template<typename T>
void bubbleSort(T arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

template <typename T>
int countVotes(T arr[], int size, int candidate){
    int count = 0;
    for(int i = 0; i< size; i++){
        if(arr[i] == candidate){
            count++;
        }
    }
    return count;
}

#endif