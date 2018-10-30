#include <iostream>
#include "skiplist.hpp"

int main() {
    skiplist<int> test{1, 2, 3, 4};
    for (auto i : test) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    for (size_t i = 0; i != 20; ++i)
        std::cout << test.get_random_level() << std::endl;

    return 0;
}
