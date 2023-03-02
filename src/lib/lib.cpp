#include "lib.hpp"

using namespace graph;
using namespace std;

Graph::Graph(const int& nodes, const std::vector<Arc>& arcs) : nodes(nodes) {
    vector<unordered_map<int, int>> adj(nodes, unordered_map<int, int>());
    for (auto e : arcs) {
        adj[e.tail].emplace(e.head, e.weight);
    }
    this->adjacentList = adj;
}

void Path::push(const int& v) {
    this->path.push_back(v);
    this->set.insert(v);
}

int graph::Path::pop() {
    auto ret = this->path.back();
    this->path.pop_back();
    this->set.erase(ret);
    return ret;
}

void Path::print() const {
    for (auto e: this->path) {
        cout << e << ' ';
    }
    cout << std::endl;
}


int Path::sumWeight(const Graph &graph) {
    if (this->path.size() == 0) {
        return 0;
    }
    int sum = 0;
    int s = this->path[0];
    for (int i = 1; i < this->path.size(); ++i) {
        int t = this->path[i];
        sum += graph.adjacentList[s].at(t);
        s = t;
    }
    return sum;
}
