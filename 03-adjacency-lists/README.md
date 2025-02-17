# Adjacency List Representation
## What is an Adjacency List
An Adjacency List is a graph representation that stores its neghbors as a collection of verticies, typically using a list or a vector. Each vertex on a graph has its own list of neighbors
## When to Use an Adjacency List
Adjacency Lists are best used when a graph is very **sparse. This mean that each vertex does not have many neighbors which will help us with time and space complexity. 
## C++ Implementation
In C++, Adjacency Lists are represented using
- std::vector<vector<int>> adjList
This vector of a vector allows us to traverse the graph quite easily using built-in vector functions
## Code Example
[AdjacencyList.cpp](/03-adjacency-lists/AdjacencyList.cpp)