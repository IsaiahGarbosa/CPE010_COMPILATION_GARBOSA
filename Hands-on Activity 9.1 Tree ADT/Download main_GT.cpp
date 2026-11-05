#include <iostream>
#include "GT.h"

int main(){

    GeneralTree<char>* A = new GeneralTree<char>('A');

    GeneralTree<char>* B = new GeneralTree<char>('B');
    GeneralTree<char>* C = new GeneralTree<char>('C');
    GeneralTree<char>* D = new GeneralTree<char>('D');
    GeneralTree<char>* E = new GeneralTree<char>('E');
    GeneralTree<char>* F = new GeneralTree<char>('F');
    GeneralTree<char>* G = new GeneralTree<char>('G');

    GeneralTree<char>* H = new GeneralTree<char>('H');
    GeneralTree<char>* I = new GeneralTree<char>('I');
    GeneralTree<char>* J = new GeneralTree<char>('J');

    GeneralTree<char>* K = new GeneralTree<char>('K');
    GeneralTree<char>* L = new GeneralTree<char>('L');
    GeneralTree<char>* M = new GeneralTree<char>('M');
    GeneralTree<char>* N = new GeneralTree<char>('N');

    GeneralTree<char>* P = new GeneralTree<char>('P');
    GeneralTree<char>* Q = new GeneralTree<char>('Q');

    GeneralTree<char>* O = new GeneralTree<char>('O');

    A->insert(B);
    A->insert(C);
    A->insert(D);
    A->insert(E);
    A->insert(F);
    A->insert(G);

    D->insert(H);

    E->insert(I);
    E->insert(J);

    F->insert(K);
    F->insert(L);
    F->insert(M);

    G->insert(N);
    G->insert(O);

    J->insert(P);
    J->insert(Q);




    std::cout << "Pre order output: ";
    A->preOrder();
    std::cout << std::endl;

    std::cout << "In order output: ";
    A->inOrder();
    std::cout << std::endl;

    std::cout << "Post order output: ";
    A->postOrder();
    std::cout << std::endl;

    A->findData(1,'E');
    A->findData(2,'D');
    A->findData(3,'F');
    A->findData(1,'W');

    A->findData(1,'O');
    A->findData(2,'O');
    A->findData(3,'O');


    return 0;
}
