#ifndef FLATTEN2D_HPP

#define FLATTEN2D_HPP
#include<vector>
using namespace std;

class Flat2D{
    public:
        std::vector<std::vector<std::pair<double, double>>> grid2D;

    Flat2D(std::vector<std::vector<std::pair<double, double>>> grid_plane);
    std::vector<std::pair<double, double>> flatten2d();

};

#endif