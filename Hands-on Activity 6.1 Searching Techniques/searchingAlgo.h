#ifndef SEARCHALGO_H
#define SEARCHINGALGO_H

template <typename T>
void linearSearchArr(int arrSize, T dataFind, T list[]){
    int i = 0;
    while(i < arrSize){
        if(dataFind == list[i]){
            std::cout<<"Seraching is successful,\n";
            return;
        }
        i++;
    }
    std::cout<<"Searching is unsuccessfull"<<std::endl;
}

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* last){

    Node<T>* slow = start;
    Node<T>* fast = start;

    while(fast != last && fast->next != last){
        slow = slow->next;

        fast = fast->next->next;
    }
    return slow;
}

template <typename T>
void binarySearchLL(Node<T>* start, T dataFind){

    Node<T>* last = nullptr;

    while(start != last){
        Node<T>* middle = getMiddle(start, last);

        if (middle->data == dataFind){
            std::cout<<"Searching is successful"<<std::endl;
            return;
        }
        else if(middle->data < dataFind){
            start = middle->next;
        }
        else{
            last = middle;
        }
    }
    std::cout<<"Searching is unsuccessful"<<std::endl;
}

template <typename T>
void binarySearchArray(T arr[], int size, T dataFind){

    int low = 0;
    int high = size-1;

    while(low <= high){
        int middle = (low + high) / 2;

        if(arr[middle] == dataFind){
            std::cout<<"Searching is successful"<<std::endl;
            return;
        }
        else if(dataFind < arr[middle]){
            low = middle + 1;
        }
        else{
            high = middle - 1;
        }
        std::cout<<"Searching is unsuccessful"<<std::endl;
    }
}


#endif
