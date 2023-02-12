#include <iostream>
#include "/home/shaig93/Documents/c++/array_op/array_op/arrays.hpp"
#include <vector>
#include "grid.hpp"
#include "flatten2D.hpp"
using namespace std;

int main() {
    double window_size = 1.0;
    double x_min = 0.0;
    double x_max = 7.0;
    double y_min = 0.0;
    double y_max = 7.0;
    Arange arangeX(x_min, x_max, window_size);
    std::vector<double> grid_center_x = arangeX.arange();
    int rows = grid_center_x.size();

    Arange arangeY(y_min, y_max, window_size);
    std::vector<double> grid_center_y = arangeY.arange();
    int columns = grid_center_y.size();

    GridWithCoordinates grid_example(grid_center_x, grid_center_y, window_size);
    std::vector<std::vector<std::pair<double, double>>> grid_coords = grid_example.gridding();

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << "(" << grid_coords[i][j].first << ", " << grid_coords[i][j].second << ") ";
        }
        std::cout << std::endl;
    }
    return 0;
}