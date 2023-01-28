#include "arrays.hpp"
#include <iostream>
#include <vector>
using namespace std;

Arange::Arange(double min_, double max_, double stps){
    mn = min_;
    mx = max_;
    step_size = stps;
}

std::vector<double> Arange::arange() {
    std::vector<double> indices;
    int number_of_loops = (mx - mn)/step_size;
    for (int i = 0; i<number_of_loops+step_size/2; i++){
        double element = i*step_size + step_size/2;
        indices.push_back(element+mn);
        }
    return indices;
}