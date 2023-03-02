#include "lib.hpp"

graph::Graph::Graph(int nodes, std::vector<Input> arcs) : nodes(nodes) {
    std::vector<std::vector<Arc>> adj(nodes, std::vector<Arc>(0, Arc(0, 0)));
    for (auto e : arcs) {
        adj[e.tail].push_back(Arc(e.head, e.weight));
    }
    this->adj = adj;
}