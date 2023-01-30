#include <iostream>
#include "/home/shaig93/Documents/c++/array_op/array_op/arrays.hpp"
#include "gaussian.hpp"
#include <vector>
using namespace std;

int main() {
    Arange arange1(1.5, 10.5, 1.0);
    std::vector<double> indices = arange1.arange();

    for (auto i : indices) {
            std::cout<<i<<" ";
        }

    GaussianFunction normal1(indices, 5.0, 2.0);
    std::vector<double> normal_ = normal1.normal();
    for (auto i : normal_) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}