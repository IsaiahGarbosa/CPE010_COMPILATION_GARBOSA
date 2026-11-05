#ifndef SEARCHALGOSUPP_H
#define SEARCHINGALGOSUPP_H

template <typename T>
int sequentialSearchArr(T arr[], int arrSize, T key){
    int comparisons = 0;

    for (int i = 0; i < arrSize; i++){
        comparisons++;
    
        if (arr[i] == key){
            return comparisons;
        }
    }
    return comparisons;
}

template <typename T>
class Node{
public:
    T data;
    Node *next;
};

template <typename T>
int sequentialSearchLL(Node<T>* head, T key){
    int comparisons = 0;

    Node<T>* current = head;

    while (current != nullptr){
        comparisons++;

        if(current->data == key){
            return comparisons;
        }
        current = current->next;
    }
    return comparisons;
}

template <typename T>
int countOccurences(T arr[], int arrSize, T key){
    int count = 0;

    for(int i = 0; i < arrSize; i++){
        if(arr[i]==key){
            count++;
        }
    }
    return count;
}

template <typename T>
int binarySearch(T arr[], int arrSize, T key){

    int low = 0;
    int high = arrSize - 1;
    int comparisons = 0;

    while(low <= high){
        int middle = (low + high)/2;

        comparisons++;

        if(arr[middle] == key){
            std::cout<<"Key "<<key<<" found at index "<<middle<<std::endl;
            return comparisons;
        }
        else if (key<arr[middle]){
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }
    return comparisons;
}


template <typename T>
int recursiveBinarySearch(T arr[], int low, int high, T key, int& comparisons){
    if (low > high){
        return -1;
    }

    int middle = (low + high) / 2;

    comparisons++;

    if (arr[middle] == key){
        return middle;
    }
    else if(key < arr[middle]){
        return recursiveBinarySearch(arr, low, middle - 1, key, comparisons);
    }
    else{
        return recursiveBinarySearch(arr, middle + 1, high, key, comparisons);
    }
}

#endif