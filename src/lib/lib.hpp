#ifndef LIB_HPP_
#define LIB_HPP_

#include <vector>
#include <iostream>
#include <unordered_set>

namespace graph {
    // (tail, head), d(tail, head) = weight
    typedef struct Input {
        int tail;
        int head;
        int weight;
        Input(const int& tail, const int& head, const int& weight)
            : tail(tail), head(head), weight(weight) {}
    } Input;

    typedef struct Arc {
        int head;
        int weight;
        Arc(const int& head, const int& weight): head(head), weight(weight) {}
    } Arc;

    // 隣接リスト
    class Graph {
    public:
        int nodes;
        std::vector<std::vector<Arc>> adj;

        Graph(const int& nodes, const std::vector<Input>& arcs);
    };

    // 有向路
    class Path {
        public:
            std::vector<int> path;

            void push(const int& v);
            int pop();
            void print() const;
            bool contains(const int& v) const {return this->set.count(v);};

        private:
            std::unordered_set<int> set;
    };
}

#endif // LIB_HPP_