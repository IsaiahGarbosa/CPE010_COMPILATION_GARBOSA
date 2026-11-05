#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

template <typename T>
class Graph{

    private:
        size_t V;
        std::vector<std::vector<T>> adjacencyList;

    public:
        Graph(size_t N) : V(N)
        {
            adjacencyList.resize(V);
        }

        void add_edge(T src, T dest)
        {
            if (src >= 0 && src < V &&
            dest >= 0 && dest < V)
            {
                adjacencyList[src].push_back(dest);
            }
            else
            {
                std::cerr<<"Vertex out of bounds"<<std::endl;
            }
        }

        void display_vertices()
        {
            std::cout<<"Graph Vertices: ";

            for (size_t i = 0; i < V; i++)
            {
                std::cout<<i<<" ";
            }
            std::cout<<std::endl;
        }

        void display_graph()
        {
            std::cout<<"\nGraph:"<<std::endl;

            for (size_t i=0; i < V; i++)
            {
                std::cout<<i<<" -> ";

                for(auto vertex : adjacencyList[i])
                {
                    std::cout<<vertex<<" ";
                }
                std::cout<<std::endl;
            }
        }
};

#endif