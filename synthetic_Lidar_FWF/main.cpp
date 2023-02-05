#include <iostream>
#include "/home/shaig93/Documents/c++/array_op/array_op/arrays.hpp"
#include "gaussian.hpp"
#include <vector>
#include "/home/shaig93/Documents/c++/array_op/meshgrid/grid.hpp"
using namespace std;


int main() {
    Arange arange1(1.5, 10.5, 1.0);
    std::vector<double> indices = arange1.arange();

    //for (auto i : indices) {
    //        std::cout<<i<<" ";
    //    }

    GaussianFunction normal1(indices, 5.0, 2.0);
    std::vector<double> normal_ = normal1.normal();
    for (auto i : normal_) {
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;

    std::vector<double> vX = {1.0, 2.4, 4.3, 5.0, 8.1, 9.7};
    std::vector<double> vY = {1.1, 2.9, 3.3, 6.7, 7.2, 10.1};

    double window_size = .5;

    GridWithCoordinates lidar_fwf_grid(vX, vY, window_size);
    std::vector<std::vector<std::pair<double, double>>> grid_coords = lidar_fwf_grid.gridding();

    for (int i = 0; i < grid_coords.size(); i++) {
        for (int j = 0; j < grid_coords[0].size(); j++) {
            std::cout << "(" << grid_coords[i][j].first << ", " << grid_coords[i][j].second << ") ";
        }
        std::cout << std::endl;
    }


    return 0;
}