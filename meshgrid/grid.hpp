#ifndef GRID_HPP

#define GRID_HPP
#include<vector>
using namespace std;


class GridWithCoordinates{
    public:
        std::vector<double> grid_center_x;
        std::vector<double> grid_center_y;
        double window_size;
        std::vector<std::vector<std::pair<double, double>>> grid_with_coords;

    GridWithCoordinates(std::vector<double> grid_center_x, std::vector<double> grid_center_y, double window_size);
    std::vector<std::vector<std::pair<double, double>>> gridding();

};


#endif