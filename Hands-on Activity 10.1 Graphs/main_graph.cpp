#include <iostream>
#include "graph.h"

int main()
{
    using T = unsigned;

    Graph<T> G(6);
    G.add_edge(0, 1);
    G.add_edge(0, 2);
    G.add_edge(1, 4);
    G.add_edge(2, 3);
    G.add_edge(3, 1);
    G.add_edge(4, 3);

    G.display_vertices();

    G.display_graph();

    return 0;
}