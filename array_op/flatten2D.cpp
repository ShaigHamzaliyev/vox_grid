#include "flatten2D.hpp"
#include <iostream>
#include <vector>
using namespace std;

Flat2D::Flat2D(std::vector<std::vector<std::pair<double, double>>>grid2D_){
    grid2D = grid2D_;
}

std::vector<std::pair<double, double>>Flat2D::flatten2d(){
std::vector<std::pair<double, double>> position;
    for (int i = 0; i < grid2D.size(); i++) {
        for (int j = 0; j < grid2D[0].size(); j++) {
            position.push_back(std::make_pair(grid2D[i][j].first, grid2D[i][j].second));
            }
        }
    
return position;

}