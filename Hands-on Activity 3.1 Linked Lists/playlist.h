#ifndef PLAYLIST_H
#define PLAYLIST_H

template <typename T>
class Playlist{
    public:
    T data;
    Playlist<T>* prev = nullptr;
    Playlist<T>* next = nullptr;
};

template <typename T>
Playlist<T>* createNode(T newData){
    Playlist<T>* newNode = new Playlist<T>;
    newNode->data = newData;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    return newNode;
}

template<typename T>
void addSong(T newData, Playlist<T>** head){
    Playlist<T>* newNode = createNode(newData);

    if(*head == nullptr){
        *head = newNode;
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    Playlist<T>* tail = (*head)->prev;

    newNode->next = *head;
    newNode->prev = tail;
    tail->next = newNode;
    (*head)->prev = newNode;
    *head = newNode;

    return;
}


template<typename T>
void deleteSong(T findData, Playlist<T>** head){

    if(*head == nullptr){
        std::cout<<"The Playlist is Empty"<<std::endl;
        return;
    }

    Playlist<T>* currentNode = *head;

    do{
        if(currentNode->data == findData){
            break;
        }
        currentNode = currentNode->next;
    }while(currentNode != *head);

    if (currentNode->data != findData){
        std::cout<<"No Song Found"<<std::endl;
        return;
    }

    if(currentNode->next == currentNode){
        delete currentNode;
        *head = nullptr;
        return;
    }

    currentNode->prev->next = currentNode->next;
    currentNode->next->prev = currentNode->prev;

    if(currentNode == *head){
        *head = currentNode->next;
    }

    delete currentNode;
}

template<typename T>
void DisplaySongs(Playlist<T>* head){
    if(head == nullptr){
        std::cout<<"The Playlist is Empty"<<std::endl;
        return;
    }

    Playlist<T>* currentNode = head;

    do{
        std::cout<<currentNode->data<<std::endl;
        currentNode = currentNode->next;
    }while(currentNode != head);
    std::cout<<std::endl;
}


template<typename T>
void nextSong(Playlist<T>** current){
    if(*current == nullptr){
        std::cout<<"\nPlaylist is Empty"<<std::endl;
        return;
    }

    *current = (*current)->next;
    std::cout<< "\nNow Playing: "<<(*current)->data<<std::endl;
}

template<typename T>
void previousSong(Playlist<T>** current){
    if(*current == nullptr){
        std::cout<<"Playlist is Empty"<<std::endl;
        return;
    }

    *current = (*current)->prev;
    std::cout<<"\nNow Playing: "<<(*current)->data<<std::endl;
}
#endif