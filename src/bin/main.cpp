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
    auto path = Path();
    outputAllPaths(path, s, graph);
}

void outputAllPaths(Path& P, const int& u, const Graph& graph) {
    P.push(u);
    if (u == t) {
        P.print();
    } else {
        for (auto v: graph.adjacentList[u]) {
            if (!P.contains(v.head)) {
                outputAllPaths(P, v.head, graph);
            }
        }
    }
    P.pop();
}