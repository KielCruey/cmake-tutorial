#include <cmath>
#include "scientific-maths.hpp"

namespace scientificMaths {
    double root(double a) {
        return std::sqrt(a);
    }

    double remainder(double a, double b) {
        return std::remainder(a, b);
    }
}