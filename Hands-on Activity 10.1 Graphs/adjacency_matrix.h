#ifndef ADJACENCY_MATRIX_H
#define ADJACENCY_MATRIX_H

#include <iostream>

template <typename T>
class Graph
{
    private:
        int vertices;
        int matrix[10][10];

    public:
        Graph(int v)
        {
            vertices = v;

            for(int i = 0; i < vertices; i++)
            {
                for(int j = 0; j<vertices; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        void addEdge(int start, int end){
            matrix[start][end] = 1;
            matrix[end][start] = 1;
        }

        void displayMatrix()
        {
            std::cout<<"Adjacency Matrix: \n\n";

            for (int i = 0; i < vertices; i++)
            {
                for(int j = 0; j<vertices; j++)
                {
                    std::cout<<matrix[i][j]<<" ";
                }
                std::cout<<std::endl;
            }
        }
};

#endif