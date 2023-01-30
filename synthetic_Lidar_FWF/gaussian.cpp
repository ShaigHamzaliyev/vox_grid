#include "gaussian.hpp"
using namespace std;
#include <vector>
#include <iostream>
#include <cmath>

GaussianFunction::GaussianFunction(std::vector<double> x_values, double mean_value, double st_deviation){
    x_axis = x_values;
    mean = mean_value;
    std = st_deviation;
}

std::vector<double> GaussianFunction::normal(){
    std::vector<double> result(x_axis.size());
    for (int i=0; i<x_axis.size(); i++){
        result[i] = pow(2 * M_PI * pow(std, 2), -0.5) * exp(-0.5 * pow(x_axis[i] - mean, 2) / pow(std, 2));
    }
return result;
}