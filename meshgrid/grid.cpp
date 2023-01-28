#include <iostream>
#include "/home/shaig93/Documents/c++/array_operations/array_op/arrays.hpp"
#include <vector>
using namespace std;
#include <algorithm>
#include "grid.hpp"

GridWithCoordinates::GridWithCoordinates(std::vector<double> grid_center_x_arr, std::vector<double> grid_center_y_arr, double window_size_){
    grid_center_x = grid_center_x_arr;
    grid_center_y = grid_center_y_arr;
    window_size = window_size_;
}

std::vector<std::vector<std::pair<double, double>>> GridWithCoordinates::gridding(){

    auto x_min = std::min_element(grid_center_x.begin(), grid_center_x.end());
    auto y_min = std::min_element(grid_center_y.begin(), grid_center_y.end());
    auto x_max = std::max_element(grid_center_x.begin(), grid_center_x.end());
    auto y_max = std::max_element(grid_center_y.begin(), grid_center_y.end());

    int row_num = grid_center_x.size();
    int column_num = grid_center_y.size();

    std::vector<std::vector<std::pair<double, double>>> grid(row_num, std::vector<std::pair<double, double>>(column_num));

    for (int i = 0; i < row_num; i++) {
        for (int j = 0; j < column_num; j++){
            grid[i][j] = std::make_pair(grid_center_x[i], grid_center_y[j]);
        }
    }

    return grid;
}