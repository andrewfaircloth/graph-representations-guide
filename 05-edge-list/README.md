# Edge List Representation
## What is an Edge List?
An Edge List is simply a list of edges that are in a graph. These are usually represented as tuples or pairs, (from, to), which means an edge exists between two verticies. This representation does not store any value or weight between verticies, only that the edge exists.
## When to Use an Edge List
Edge Lists are most commonly used when the focus of the graph is on the edges themselves, and not the verticies involved. This is because it is easier to search for an edge than to check if vertex A connects to vertex B.
## C++ Implementation
The implementation of Edge Lists are most commonly seen as:
- std::vector<std::pair<int, int>>

Where the keys are the vertex's assosiated number.
This can be changed to a string, but int is the most common and easy way to represent a vertex.
## Code Example
[EdgeList.cpp](/EdgeList.cpp)