#ifndef GAUSSIAN_HPP

#define GAUSSIAN_HPP
#include <vector>
using namespace std;

class GaussianFunction{
    public:
        std::vector<double> x_axis;
        double mean;
        double std; 

        GaussianFunction(std::vector<double> x_values, double mean_value, double st_deviation);
        std::vector<double> normal();
};

#endif