#ifndef LIB_HPP_
#define LIB_HPP_

#include <vector>

namespace graph {
    // (tail, head), d(tail, head) = weight
    typedef struct Input {
        int tail;
        int head;
        int weight;
        Input(int tail, int head, int weight) : tail(tail), head(head), weight(weight) {}
    } Input;

    typedef struct Arc {
        int head;
        int weight;
        Arc(int head, int weight): head(head), weight(weight) {}
    } Arc;

    // 隣接リスト
    class Graph {
    public:
        int nodes;
        std::vector<std::vector<Arc>> adj;

        Graph(int nodes, std::vector<Input> arcs);
    };
}

#endif // LIB_HPP_