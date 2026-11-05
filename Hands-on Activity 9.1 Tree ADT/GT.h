#ifndef GT_H
#define GT_H

template <typename T>
class GeneralTree{
    private:
        T key;
        GeneralTree<T>* firstChild;
        GeneralTree<T>* sibling;

        bool findPreOrder(T findData);
        bool findInOrder(T findData);
        bool findPostOrder(T findData);

    public:
        GeneralTree(T value);
        void insert(GeneralTree<T>* child);
        void preOrder();
        void inOrder();
        void postOrder();
        void findData(int choice, T key);
};

template <typename T> 
GeneralTree<T>::GeneralTree(T value){
    key = value;
    firstChild = nullptr;
    sibling = nullptr;
}

template <typename T>
void GeneralTree<T>::insert(GeneralTree<T>* child){
    if(firstChild == nullptr){
        firstChild = child;
    }
    else{
        GeneralTree<T>* current = firstChild;
        while(current->sibling != nullptr){
            current = current->sibling;
        }
        current->sibling = child;
    }
}

template <typename T>
void GeneralTree<T>::preOrder(){

    std::cout << key << " ";

    if(firstChild != nullptr){
        firstChild->preOrder();
    }

    if(sibling != nullptr){
        sibling->preOrder();
    }
}

template <typename T>
void GeneralTree<T>::inOrder(){

    if(firstChild != nullptr){
        firstChild->inOrder();
    }

    std::cout << key << " ";

    if(sibling != nullptr){
        sibling->inOrder();
    }
}

template <typename T>
void GeneralTree<T>::postOrder(){

    if(firstChild != nullptr){
        firstChild->postOrder();
    }

    if(sibling != nullptr){
        sibling->postOrder();
    }
    
    std::cout << key << " ";

}

template <typename T>
bool GeneralTree<T>::findPreOrder(T findData){

    if(key == findData){
        return true;
    }

    if(firstChild != nullptr){
        if(firstChild->findPreOrder(findData)){
            return true;
        }
    }

    if(sibling != nullptr){
        if(sibling->findPreOrder(findData)){
            return true;
        }
    }

    return false;
}

template <typename T>
bool GeneralTree<T>::findInOrder(T findData){

    if(firstChild != nullptr){
        if(firstChild->findInOrder(findData)){
            return true;
        }
    }
    
    if(key == findData){
        return true;
    }
    
    if(sibling != nullptr){
        if(sibling->findInOrder(findData)){
            return true;
        }
    }
    return false;
}

template <typename T>
bool GeneralTree<T>::findPostOrder(T findData){
    
    if(firstChild != nullptr){
        if(firstChild->findPostOrder(findData)){
            return true;
        }
    }
    if(sibling != nullptr){
        if(sibling->findPostOrder(findData)){
            return true;
        }
    }
    
    if(key == findData){
        return true;
    }

    return false;
}

template <typename T>
void GeneralTree<T>::findData(int choice, T key){
    bool found = false;

    if(choice == 1){
        found = findPreOrder(key);
    }

    else if(choice == 2){
        found = findInOrder(key);
    }
    else if(choice == 3){
        found = findPostOrder(key);
    }
    if(found){
        std::cout<<key<<" was found"<<std::endl;
    }
}

#endif
