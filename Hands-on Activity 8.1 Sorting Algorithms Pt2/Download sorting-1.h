#ifndef SORTING_H
#define SORTING_H

template <typename T>
void displayArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout<<arr[i]<< " ";
    }
    std::cout<<std::endl;
}


template <typename T>
void shellSort(T arr[], int size){

    for(int gap = size / 2; gap > 0; gap /= 2){
        for (int i = gap; i < size; i++){
            T temp = arr[i];
            int j = i;
            while(j >= gap && arr[j - gap] > temp){
                arr[j] = arr[j - gap];
                j = j - gap;
            }
            arr[j] = temp;
        }
    }
}

template<typename T>
void merge(T arr[], int left, int middle, int right){
    int i = left;
    int j = middle +1;
    int k = 0;

    int size = right - left + 1;
    T* temp = new T[size];

    while (i <= middle && j <= right){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i<=middle){
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    while(j <= right){
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int x = 0; x < size; x++){
        arr[left + x] = temp[x];
    }

    delete[] temp;
}

template <typename T>
void mergeSort(T arr[], int left, int right){

    if (left<right){
        int middle = (left + right) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle+1, right);
        merge(arr, left, middle, right);
    }
}

template <typename T>
int partition(T arr[], int low, int high){
    T pivot = arr[high];
    int i = low - 1;

    for(int j = low; j<high; j++){

        if(arr[j] < pivot){
            i++;

            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

template <typename T>
void quickSort(T arr[], int low,  int high){

    if (low < high){

        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot+1, high);
    }
}

#endif
