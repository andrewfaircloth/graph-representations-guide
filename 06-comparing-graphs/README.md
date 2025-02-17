# Comparing Graph Representations
## Space Complexity
1. Adjacnecy Lists
The space complexity of an Adjacency List is O(V + E) where V is the number of verticies and E is the number of edges. This is because each vertex sotres a vector of it's adjacent edges. It's important to know that in an undirected graph, each edge is represented twice.
2. Adjacency Matricies
The space complexity of an Adjacency Matrix is always O(V^2) where V is the number of edges because the matrix contains each vertex with a value indicating if there is an edge connecting the verticies.
3. Edge Lists
The space complexity of an Edge List is O(E) where is the number of edges becuase each edge is represented once. This is good becuase it saves space in graphs where we don't care about weight and have a low ammount of edges.
## Time Complexity
V - number of verticies
E - number of edges
deg(V) - number of neighbors of vertex V
1. Adjacnecy Lists
- Checking Edge Existence: O(V) - we have to search through the list of neighbors given a vertex which in worst case contains every neighbor.
- Traversing Neighbors: O(deg(V)) - we have to traverse the entire list of neighbors which equals the degree of the vertex
- Inserting Edge: O(1) - adding an edge only needs for us to insert a value into a vector
2. Adjacency Matricies
- Checking Edge Existence: O(1) - checking if an edge exists is a simple access of matrix[from][to] = ?.
- Traversing Neighbors: O(V) - we must iterate through the full row of vertex V
- Inserting Edge: O(1) - we can directly insert and edge into the matrix using a single lookup
3. Edge Lists
- Checking Edge Existence: O(E) - at worst case we mush check the entire list of edges.
- Traversing Neighbors: O(E) - we must traverse the full list to find edges involving vertex V
- Inserting Edge: O(1) - to add an edge we only have to add to the list of edges
## Best Use Cases
1. Adjacnecy Lists
Adjacency Lists are best used when a graph is sparse. This means that there are many verticies with relativly few edges that corespond. This is because Adjacency Lists are very space efficient and few edges bring down the time it takes to perform operations. 
2. Adjacency Matricies
Adjacency Matricies are the best representation of a graph when the graph is dense. Even though Adjacency Matricies are not space efficient, they are the best for time complexity. So, when there are many more edges than verticies, we can sacrifice some space in order to have instant lookups for operations. 
3. Edge Lists
Edge Lists are best used for edge focoused cases, when all we care about is edges. This is nice for algorithms such as unweighted minimum spanning tree, whre all we care about is edges existance and not the weights associated with them. 