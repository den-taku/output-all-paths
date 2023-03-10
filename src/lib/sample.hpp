#ifndef SAMPLE_HPP_
#define SAMPLE_HPP_

#include "lib.hpp"
#include <vector>

graph::Graph sample() {
    std::vector<graph::Arc> input = {
        graph::Arc(0, 1, 3), //重み1の有向辺(0,3)
        graph::Arc(0, 8, 4), //以下同様
        graph::Arc(0, 7, 5),
        graph::Arc(0, 0, 6),
        graph::Arc(0, 3, 8),
        graph::Arc(0, 5, 9),
        graph::Arc(0, 4, 12),
        graph::Arc(0, 1, 13),
        graph::Arc(0, 1, 16),
        graph::Arc(1, 9, 3),
        graph::Arc(1, 4, 7),
        graph::Arc(1, 9, 8),
        graph::Arc(1, 1, 9),
        graph::Arc(1, 2, 13),
        graph::Arc(1, 0, 15),
        graph::Arc(1, 5, 18),
        graph::Arc(2, 0, 3),
        graph::Arc(2, 8, 6),
        graph::Arc(2, 7, 7),
        graph::Arc(2, 2, 9),
        graph::Arc(2, 2, 10),
        graph::Arc(2, 3, 12),
        graph::Arc(2, 8, 14),
        graph::Arc(2, 7, 17),
        graph::Arc(2, 8, 18),
        graph::Arc(2, 1, 19),
        graph::Arc(3, 5, 4),
        graph::Arc(3, 7, 6),
        graph::Arc(3, 8, 9),
        graph::Arc(3, 7, 11),
        graph::Arc(3, 4, 15),
        graph::Arc(3, 2, 17),
        graph::Arc(3, 4, 19),
        graph::Arc(4, 3, 5),
        graph::Arc(4, 4, 6),
        graph::Arc(4, 7, 9),
        graph::Arc(4, 9, 10),
        graph::Arc(4, 5, 17),
        graph::Arc(4, 2, 18),
        graph::Arc(5, 5, 6),
        graph::Arc(5, 4, 10),
        graph::Arc(5, 5, 12),
        graph::Arc(5, 2, 13),
        graph::Arc(5, 6, 18),
        graph::Arc(6, 8, 7),
        graph::Arc(6, 0, 10),
        graph::Arc(6, 9, 12),
        graph::Arc(6, 5, 13),
        graph::Arc(6, 9, 15),
        graph::Arc(6, 7, 17),
        graph::Arc(6, 3, 18),
        graph::Arc(7, 9, 8),
        graph::Arc(7, 8, 9),
        graph::Arc(7, 8, 11),
        graph::Arc(7, 9, 13),
        graph::Arc(7, 3, 15),
        graph::Arc(7, 2, 16),
        graph::Arc(7, 0, 17),
        graph::Arc(7, 1, 18),
        graph::Arc(8, 6, 9),
        graph::Arc(8, 4, 10),
        graph::Arc(8, 5, 12),
        graph::Arc(8, 0, 13),
        graph::Arc(8, 0, 14),
        graph::Arc(8, 3, 17),
        graph::Arc(8, 3, 18),
        graph::Arc(8, 7, 19),
        graph::Arc(9, 8, 10),
        graph::Arc(9, 7, 11),
        graph::Arc(9, 7, 13),
        graph::Arc(9, 2, 14),
        graph::Arc(9, 6, 15),
        graph::Arc(9, 2, 16),
        graph::Arc(9, 5, 17),
        graph::Arc(9, 1, 19),
        graph::Arc(10, 5, 11),
        graph::Arc(10, 3, 15),
        graph::Arc(10, 9, 18),
        graph::Arc(11, 9, 13),
        graph::Arc(11, 6, 14),
        graph::Arc(11, 9, 15),
        graph::Arc(11, 1, 16),
        graph::Arc(11, 6, 17),
        graph::Arc(11, 6, 18),
        graph::Arc(11, 5, 19),
        graph::Arc(12, 3, 14),
        graph::Arc(12, 9, 15),
        graph::Arc(12, 7, 16),
        graph::Arc(12, 4, 18),
        graph::Arc(13, 7, 14),
        graph::Arc(13, 1, 16),
        graph::Arc(13, 7, 17),
        graph::Arc(13, 9, 18),
        graph::Arc(13, 3, 19),
        graph::Arc(14, 9, 16),
        graph::Arc(14, 2, 17),
        graph::Arc(15, 6, 19),
        graph::Arc(16, 7, 17),
        graph::Arc(16, 7, 19),
        graph::Arc(17, 8, 18),
    };
    return graph::Graph(19, input);
}

#endif // SAMPLE_HPP_