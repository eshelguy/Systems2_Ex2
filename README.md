
# Graph Class Operator Documentation

This document provides an overview of the various operators implemented in the `Graph` class.

## Unary Operators

### `Graph operator+() const`
- **Description:** Returns a copy of the current graph.
- **Usage:** `Graph g = +graph;`

### `Graph operator-() const`
- **Description:** Negates all edge weights in the graph, returning a new `Graph` object.
- **Usage:** `Graph g = -graph;`

## Binary Arithmetic Operators

### `Graph operator+(const Graph& graph) const`
- **Description:** Adds the adjacency matrices of two graphs and returns the result as a new `Graph`.
- **Throws:** `std::invalid_argument` if the graphs are not the same size.
- **Usage:** `Graph g = graph1 + graph2;`

### `Graph& operator+=(const Graph& graph)`
- **Description:** Adds another graph’s adjacency matrix to the current graph’s matrix in-place.
- **Throws:** `std::invalid_argument` if the graphs are not the same size.
- **Usage:** `graph1 += graph2;`

### `Graph operator-(const Graph& graph) const`
- **Description:** Subtracts the adjacency matrix of another graph from the current graph, returning a new `Graph`.
- **Throws:** `std::invalid_argument` if the graphs are not the same size.
- **Usage:** `Graph g = graph1 - graph2;`

### `Graph& operator-=(const Graph& graph)`
- **Description:** Subtracts another graph’s adjacency matrix from the current graph’s matrix in-place.
- **Throws:** `std::invalid_argument` if the graphs are not the same size.
- **Usage:** `graph1 -= graph2;`

## Comparison Operators

### `bool operator>(const Graph& graph)`
- **Description:** Checks if the current graph is "greater" than another graph, primarily by comparing the number of edges and vertices.
- **Usage:** `if (graph1 > graph2) {...}`

### `bool operator>=(const Graph& graph)`
- **Description:** Checks if the current graph is greater than or equal to another graph.
- **Usage:** `if (graph1 >= graph2) {...}`

### `bool operator<(const Graph& graph)`
- **Description:** Checks if the current graph is "less" than another graph, primarily by comparing the number of edges and vertices.
- **Usage:** `if (graph1 < graph2) {...}`

### `bool operator<=(const Graph& graph)`
- **Description:** Checks if the current graph is less than or equal to another graph.
- **Usage:** `if (graph1 <= graph2) {...}`

### `bool operator==(const Graph& graph)`
- **Description:** Checks if two graphs are identical by comparing their adjacency matrices.
- **Usage:** `if (graph1 == graph2) {...}`

### `bool operator!=(const Graph& graph)`
- **Description:** Checks if two graphs are not equal.
- **Usage:** `if (graph1 != graph2) {...}`

## Increment and Decrement Operators

### `Graph& operator++()`
- **Description:** Increments each non-zero edge weight by 1 (prefix increment).
- **Usage:** `++graph;`

### `Graph operator++(int)`
- **Description:** Increments each non-zero edge weight by 1 (postfix increment).
- **Usage:** `graph++;`

### `Graph& operator--()`
- **Description:** Decrements each non-zero edge weight by 1 (prefix decrement).
- **Usage:** `--graph;`

### `Graph operator--(int)`
- **Description:** Decrements each non-zero edge weight by 1 (postfix decrement).
- **Usage:** `graph--;`

## Multiplication Operators

### `Graph& operator*(int num)`
- **Description:** Multiplies each edge weight in the graph by a scalar value `num`.
- **Usage:** `graph * 2;`

### `Graph operator*(const Graph& graph) const`
- **Description:** Performs matrix multiplication of two graphs' adjacency matrices.
- **Throws:** `std::invalid_argument` if the graphs are not the same size.
- **Usage:** `Graph g = graph1 * graph2;`

### `Graph& operator/=(int num)`
- **Description:** Divides all edge weights in the graph by a scalar value `num`.
- **Throws:** `std::invalid_argument` if the scalar is 0.
- **Usage:** `graph /= 2;`

## Stream Insertion Operator

### `friend std::ostream& operator<<(std::ostream& output, const Graph& g)`
- **Description:** Outputs the adjacency matrix of the graph to an output stream.
- **Usage:** `std::cout << graph;`
