#include <iostream>
#include "adjacency_matrix.h"

int main() {

    Graph<int> graph(5);

    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(1,3);
    graph.addEdge(2,4);
    graph.addEdge(3,4);

    graph.displayMatrix();

    return 0;
}