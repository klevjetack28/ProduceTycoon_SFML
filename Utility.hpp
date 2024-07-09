#ifndef UTILITY_HPP
#define UTILITY_HPP
namespace Utility {
    const double PI = 3.14159265358979323846;
    
    inline double degree_to_radian(double degree) {
        return degree * PI / 180;
    }

    inline double radian_to_degree(double radian) {
        return radian * 180 / PI;
    }
    
    
}
#endif // UTILITY_HPP
