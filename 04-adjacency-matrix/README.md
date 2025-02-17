# Adjacency Matrix Representation
## What is an Adjacency Martix?
An Adjacency Matrix is a 2D array that stores each element at positions [from][to], [A][B] meaning an edge goes from vertex A to vertex B. For directed graphs, this representation is not symetrical while undirected graphs store each edge twice. If there is an edge from A to B, matrix[A][B] = 1, while when there isn't and edge from A to B, matrix[A][B] = 0.
## When to Use an Adjacency Matrix
Adjacecny Matricies are most commonly used for dense graphs, meaning that each vertex has many edges. This representation provides quick access to check if an edge exists between two verticies which is helpful in many algorithms.
## C++ Implementation
Adjacency Matricies are also usually represented as:
> vector<vector<int>>
Where int represents the weight or lack thereof. 
## Code Example
[AdjacencyMatrix.cpp](/04-adjacency-matrix/AdjacencyMatrix.cpp)