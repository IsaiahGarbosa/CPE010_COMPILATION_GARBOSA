#include <iostream>
#include "searchingAlgoSupp.h"

int main(){

    //sequential search array
    int arr[] = {15,18,2,19,18,0,8,14,19,14};
    int size = 10;
    int key = 18;
    
    int comparisonsArr = sequentialSearchArr(arr, size, key);

    std::cout<<"Key: "<<key<<std::endl;
    std::cout<<"Number of comparisons: "<<comparisonsArr<<std::endl;

    //sequential search LL
    Node<int>* head = nullptr;
    Node<int>* tail = nullptr;

    for (int i = 0; i < size; i++){
        Node<int>* newNode = new Node<int>;

        newNode->data = arr[i];
        newNode->next = nullptr;

        if (head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    };

    int comparisonsLL = sequentialSearchLL(head, key);

    std::cout<<std::endl;
    std::cout<<"Key: "<<key<<std::endl;
    std::cout<<"Number of comparisons: "<<comparisonsLL<<std::endl;

    //counting occurences
    int occurrences = countOccurences(arr, size, key);
    
    std::cout<<std::endl;
    std::cout<<"Key: "<<key<<std::endl;
    std::cout<<"Number of occurences: "<<occurrences<<std::endl;

    //binary search
    int arrB[] = {3,5,6,8,11,12,14,15,17,18};
    int sizeB = 10;
    int keyB = 8;

    std::cout<<std::endl;
    int comparisonsBS = binarySearch(arrB, sizeB, keyB);
    std::cout<<"Number of comparisons: "<<comparisonsBS<<std::endl;
    std::cout<<std::endl;

    //recursive binary search
    int comparisonsR = 0;

    int result = recursiveBinarySearch(arrB,0,sizeB - 1, keyB, comparisonsR);

    if(result != -1){
        std::cout<<"Key "<<keyB<<" found at index "<<result<<std::endl;
    }
    else{
        std::cout<<"Key not found."<<std::endl;
    }

    std::cout<<"Comparisons: "<<comparisonsR<<std::endl;
}