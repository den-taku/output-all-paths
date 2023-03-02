#include "lib.hpp"

graph::Graph::Graph(const int& nodes, const std::vector<Input>& arcs) : nodes(nodes) {
    std::vector<std::vector<Arc>> adj(nodes, std::vector<Arc>(0, Arc(0, 0)));
    for (auto e : arcs) {
        adj[e.tail].push_back(Arc(e.head, e.weight));
    }
    this->adj = adj;
}

void graph::Path::push(const int& v) {
    this->path.push_back(v);
    this->set.insert(v);
}

int graph::Path::pop() {
    auto ret = this->path.back();
    this->path.pop_back();
    this->set.erase(ret);
    return ret;
}

void graph::Path::print() const {
    for (auto e: this->path) {
        std::cout << e << ' ';
    }
    std::cout << std::endl;
}
