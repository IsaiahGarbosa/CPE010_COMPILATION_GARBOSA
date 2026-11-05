#ifndef QUEUEARR_H
#define QUEUEARR_H

template <typename T>
class QueueArray{
private:
    T* q_array;
    int q_capacity;
    int q_size;
    int q_front;
    int q_back;
public:
    QueueArray(int capacity = 100){
        q_capacity = capacity;
        q_array = new T[q_capacity];
        q_size = 0;
        q_front = 0;
        q_back = -1;
    }

    QueueArray(const QueueArray<T> &other){
        q_capacity = other.q_capacity;
        q_size = other.q_size;
        q_front = other.q_front;
        q_back = other.q_back;
        q_array = new T[q_capacity];
        for(int i = 0; i < q_capacity; i++){
           q_array[i] = other.q_array[i];
        }
    }

    QueueArray<T>& operator=(const QueueArray<T> &other){
        if(this != &other){
            delete[] q_array;
            q_capacity = other.q_capacity;
            q_size = other.q_size;
            q_front = other.q_front;
            q_back = other.q_back;
            q_array = new T[q_capacity];
            for(int i = 0; i < q_capacity; i++){
                q_array[i] = other.q_array[i];
            }
        }
        return *this;
    }

    ~QueueArray(){
        delete[] q_array;
    }

    bool Empty(){
        return q_size == 0;
    }

    int Size(){
        return q_size;
    }

    void Clear(){
        q_size = 0;
        q_front = 0;
        q_back = -1;
    }

    T Front(){
        if(Empty()){
            std::cout<<"Queue is Empety"<<std::endl;
            return T();
        }
        return q_array[q_front];
    }

    T Back(){
        if(Empty()){
            std::cout<<"Queue is Empety"<<std::endl;
            return T();
        }
        return q_array[q_back];
    }

    void Enqueue(T value){
        if(q_size == q_capacity){
            std::cout<<"Queue is Full"<<std::endl;
            return;
        }
        q_back++;
        if(q_back == q_capacity){
            q_back = 0;
        }
        q_array[q_back] = value;
        q_size++;
    }

    void Dequeue(){
        if(Empty()){
            std::cout<<"Queue is Empety"<<std::endl;
            return;
        }
        q_front++;
        if(q_front == q_capacity){
            q_front = 0;
        }
        q_size--;

        if(q_size == 0){
            q_front = 0;
            q_back = -1;
        }
    }

};

#endif