#include "../lib/lib.hpp"
#include <vector>
#include <iostream>
using namespace std;
using namespace graph;

int main() {
    // This is the directed graph we're going to use.
            // The node numbers correspond to the different states,
            // and the edge weights symbolize the cost of moving
            // from one node to another.
            // Note that the edges are one-way.
            //
            //                  7
            //          +-----------------+
            //          |                 |
            //          v   1        2    |  2
            //          0 -----> 1 -----> 3 ---> 4
            //          |        ^        ^      ^
            //          |        | 1      |      |
            //          |        |        | 3    | 1
            //          +------> 2 -------+      |
            //           10      |               |
            //                   +---------------+
            //
            // The graph is represented as an adjacency list where each index,
            // corresponding to a node value, has a list of outgoing edges.
            // Chosen for its efficiency.
    vector<Input> input = {
        Input(0, 2, 10),
        Input(0, 1, 1),
        Input(1, 3, 2),
        Input(2, 1, 1),
        Input(2, 3, 3),
        Input(2, 4, 1),
        Input(3, 0, 7),
        Input(3, 4, 2),
    };
    auto graph = Graph(5, input);
    for (int i = 0; i < 5; ++i) {
        cout << i << "-> ";
        for (auto e : graph.adj[i]) {
            cout << e.head << '(' << e.weight << "),";
        }
        cout << endl;
    }
}