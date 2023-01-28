#include <iostream>
#include "/home/shaig93/Documents/c++/array_operations/arrays.hpp"
#include <vector>
using namespace std;

int main() {
    double window_size = 1.0;
    double x_min = 0.0;
    double x_max = 7.0;
    double y_min = 4.0;
    double y_max = 8.0;
    Arange arangeX(x_min, x_max, window_size);
    std::vector<double> grid_center_x = arangeX.arange();
    int rows = grid_center_x.size();

    Arange arangeY(y_min, y_max, window_size);
    std::vector<double> grid_center_y = arangeY.arange();
    int columns = grid_center_y.size();

    std::vector<std::vector<std::pair<double, double>>> grid(rows, std::vector<std::pair<double, double>>(columns));
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++){
            grid[i][j] = std::make_pair(grid_center_x[i], grid_center_y[j]);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << "(" << grid[i][j].first << ", " << grid[i][j].second << ") ";
        }
        std::cout << std::endl;
    }
    return 0;
}