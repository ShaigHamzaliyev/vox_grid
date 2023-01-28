#ifndef ARRAYS_HPP

#define ARRAYS_HPP
#include<vector>
using namespace std;

class Arange{
    public:
        double mn;
        double mx;
        double step_size;
        
        Arange(double min_, double max_, double step_size);
        std::vector<double> arange();
};

#endif
