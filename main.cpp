#include <iostream>
#include "arrays.hpp"

using namespace std;

int main() {
        Arange arange1(4.0, 8.0, 2.0);
        std::vector<double> indices = arange1.arange();
        for (auto i : indices) {
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    return 0;
}