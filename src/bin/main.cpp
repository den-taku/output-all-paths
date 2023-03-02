#include "../lib/lib.hpp"
#include <vector>
#include <iostream>
using namespace std;
using namespace graph;

void outputAllPaths(Path &P, const int& u, const Graph &graph);

int s = 0;
int t = 4;

int main() {
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
    vector<Arc> input = {
        Arc(0, 2, 10),
        Arc(0, 1, 1),
        Arc(1, 3, 2),
        Arc(2, 1, 1),
        Arc(2, 3, 3),
        Arc(2, 4, 1),
        Arc(3, 0, 7),
        Arc(3, 4, 2),
    };
    auto graph = Graph(5, input);
    for (int i = 0; i < 5; ++i) {
        cout << i << " -> ";
        for (auto e: graph.adjacentList[i]) {
            cout << e.first << "(" << e.second << "), ";
        }
        cout << endl;
    }
    auto path = Path();
    outputAllPaths(path, s, graph);
}

void outputAllPaths(Path& P, const int& u, const Graph& graph) {
    P.push(u);
    if (u == t) {
        P.print();
        cout << "\tweight: " << P.sumWeight(graph) << endl;
    } else {
        // first: head, second: weight
        for (auto v: graph.adjacentList[u]) {
            if (!P.contains(v.first)) {
                outputAllPaths(P, v.first, graph);
            }
        }
    }
    P.pop();
}