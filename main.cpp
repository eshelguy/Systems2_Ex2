//mail: guyes134@gmail.com

#include <string>
#include <vector>
#include "Graph.hpp"
#include "Algorithms.hpp"
#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
    Graph g;
    vector<vector<int>> graph = {
            {0, 1, 0},
            {1, 0, 1},
            {0, 1, 0}};
    g.loadGraph(graph);

    g.printGraph();
    cout << Algorithms::isConnected(g) << endl;
    cout << Algorithms::shortestPath(g, 0, 2) << endl;
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::isBipartite(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    cout << "" << endl;

    vector<vector<int>> graph2 = {
            {0, 1, 1, 0, 0},
            {1, 0, 1, 0, 0},
            {1, 1, 0, 1, 0},
            {0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0}};

    g.loadGraph(graph2);

    g.printGraph();
    cout << Algorithms::isConnected(g) << endl;
    cout << Algorithms::shortestPath(g, 0, 4) << endl;
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::isBipartite(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    cout << "" << endl;

    vector<vector<int>> graph3 = {
            {0, 1, 0, 0, 0},
            {1, 0, 3, 0, 0},
            {0, 3, 0, 4, 0},
            {0, 0, 4, 0, 5},
            {0, 0, 0, 5, 0}};
    g.loadGraph(graph3);

    g.printGraph();
    cout << Algorithms::isConnected(g) << endl;
    cout << Algorithms::shortestPath(g, 0, 4) << endl;
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::isBipartite(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    cout << "" << endl;

    std::vector<std::vector<int>> graph5 = {
            {0, 1, 0, 0, 0},
            {1, 0, 3, 0, 0},
            {0, 3, 0, 4, 0},
            {0, 0, 4, 0, 5},
            {0, 0, 0, 5, 0}
    };

    g.loadGraph(graph5);

    std::cout << "Graph 5:" << std::endl;
    g.printGraph();
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    std::vector<std::vector<int>> graph6 = {
            {0, 1, 0, 0, 0},
            {1, 0, -3, 0, 0},
            {0, -3, 0, 4, 0},
            {0, 0, 4, 0, 5},
            {0, 0, 0, 5, 0}
    };

    g.loadGraph(graph6);

    std::cout << "Graph 6:" << std::endl;
    g.printGraph();
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    std::vector<std::vector<int>> graph7 = {
            {0, 1, 0, 0, 0},
            {1, 0, 3, 0, 0},
            {0, 3, 0, 4, 0},
            {0, 0, 4, 0, -5},
            {0, 0, 0, -5, 0}
    };

    g.loadGraph(graph7);

    std::cout << "Graph 7:" << std::endl;
    g.printGraph();
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    vector<vector<int>> graph4 = {
            {0, 1, 2, 0},
            {1, 0, 3, 0},
            {2, 3, 0, 4},
            {0, 0, 4, 0},
            {0, 0, 0, 5}};
    try
    {
        g.loadGraph(graph4);
    }
    catch (const std::invalid_argument &e)
    {
        cout << e.what() << endl;
    }


    std::vector<std::vector<int>> graphWithNegativeCycle = {
            {0, 1, 0, 0, 0},
            {0, 0, -1, 0, 0},
            {0, 0, 0, 1, 0},
            {0, 0, 0, 0, 1},
            {0, 0, 0, -5, 0}
    };

    g.loadGraph(graphWithNegativeCycle);

    g.printGraph();
    cout << Algorithms::isConnected(g) << endl;
    cout << Algorithms::shortestPath(g, 0, 4) << endl;
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::isBipartite(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    std::vector<std::vector<int>> adjacencyMatrix = {
            {0, 1, 0, 0},
            {0, 0, -2, 0},
            {0, 0, 0, -2},
            {1, 0, 0, 0}
    };
    g.loadGraph(adjacencyMatrix);

    g.printGraph();
    cout << Algorithms::isConnected(g) << endl;
    cout << Algorithms::shortestPath(g, 0, 3) << endl;
    cout << Algorithms::isContainsCycle(g) << endl;
    cout << Algorithms::isBipartite(g) << endl;
    cout << Algorithms::negativeCycle(g) << endl;

    vector<vector<int>> matrix1 = {
            {0,  -1, 7,  8},
            {10, 0,  -1, 6},
            {9,  9,  0,  -1},
            {-1, 7,  8,  0}
    };

    g.loadGraph(matrix1);
    cout << Algorithms::negativeCycle(g) << endl;

    Graph g11, g1_21, g21, g31, g41;
    vector<vector<int>> graph11 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 1, 0}
    };

    g11.loadGraph(graph11);

    vector<vector<int>> graph21 = {
            {0, 1, 0},
            {1, 0, 1},
            {0, 1, 0}
    };
    g21.loadGraph(graph21);

    vector<vector<int>> graph1_21 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 1, 0}
    };
    g1_21.loadGraph(graph1_21);

    vector<vector<int>> graph31 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 2},
            {1, 0, 0, 1, 0}
    };
    g31.loadGraph(graph31);

    vector<vector<int>> graph41 = {
            {0, 1, 0},
            {1, 0, 2},
            {0, 1, 0}
    };
    g41.loadGraph(graph41);

    vector<vector<int>> graph33 = {
            {0, 0, 1},
            {0, 0, 2},
            {1, 1, 0}
    };
    Graph g33;
    g33.loadGraph(graph33);

    if (g33 < g31){
        cout << "yes" << endl;
    }

    if (!(g11 > g41)){
        cout << "works" << endl;
    }

    Graph g331, g332, g333, g333_1, g333_2;
    vector<vector<int>> graph133 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 1, 0}
    };
    g331.loadGraph(graph133);

    vector<vector<int>> graph333 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 2},
            {1, 0, 0, 1, 0}
    };
    g333.loadGraph(graph333);

    vector<vector<int>> graph333_1 = {
            {0, 2, 0, 0, 2},
            {2, 0, 2, 0, 0},
            {0, 2, 0, 2, 0},
            {0, 0, 2, 0, 2},
            {2, 0, 0, 2, 0}
    };
    g333_1.loadGraph(graph333_1);

    vector<vector<int>> graph333_2 = {
            {0, 2, 0, 0, 2},
            {2, 0, 2, 0, 0},
            {0, 2, 0, 2, 0},
            {0, 0, 2, 0, 4},
            {2, 0, 0, 2, 0}
    };
    g333_2.loadGraph(graph333_2);
    Graph gNew = g333*g333_1;


    gNew.printGraph();

    Graph g1;
    // 3x3 matrix that represents a connected graph.
    vector<vector<int>> graph101 = {
            {0, 1, 0},
            {1, 0, 1},
            {0, 1, 0}};
    g1.loadGraph(graph101); // Load the graph to the object.

    cout<<g1<<endl; // Should print the matrix of the graph: [0, 1, 0], [1, 0, 1], [0, 1, 0]

    // 3x3 matrix that represents a weighted connected graph.
    vector<vector<int>> weightedGraph = {
            {0, 1, 1},
            {1, 0, 2},
            {1, 2, 0}};
    Graph g2;
    g2.loadGraph(weightedGraph); // Load the graph to the object// .
    g2.printGraph();
    cout << endl;

    Graph g3 = g1 + g2; // Add the two graphs together.
    cout<<g3<<endl;           // Should print the matrix of the graph: [0, 2, 1], [2, 0, 3], [1, 3, 0]

    g1 = g1.operator*(-2);        // Multiply the graph by -2.
    cout<<g1<<endl; // Should print the matrix of the graph: [0, -2, 0], [-2, 0, -2], [0, -2, 0]

    g1 /= -2;
    g1.printGraph();
    cout <<endl;

    Graph g4 = g1 * g2; // Multiply the two graphs together.
    cout<<g4<<endl;           // Should print the multiplication of the matrices of g1 and g2: [0, 0, 2], [1, 0, 1], [1, 0, 0]

    // 5x5 matrix that represents a connected graph.
    vector<vector<int>> graph222 = {
            {0, 1, 0, 0, 1},
            {1, 0, 1, 0, 0},
            {0, 1, 0, 1, 0},
            {0, 0, 1, 0, 1},
            {1, 0, 0, 1, 0}};
    Graph g5;
    g5.loadGraph(graph222); // Load the graph to the object.
    try
    {
        Graph g6 = g5 * g1; // Multiply the two graphs together.
    }
    catch (const std::invalid_argument &e)
    {
        cout << e.what() << endl; // Should print "The number of columns in the first matrix must be equal to the number of rows in the second matrix."
    }


    return 0;


}