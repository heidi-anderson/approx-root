#pragma once
#include <cmath>
#include <functional>

using namespace std;

// you will add the function prototype for the function named
// newtonApprox here. Parameters are the starting guess, the name of
// the function being evaluated, the function that computes the derivative
// of the function and an epsilon value for computing if it is close
// enough. They must be in this order
/* newtonApprox - approximates the root of a differentiable function f 
    it will compute for the root x0. if x0 is less than some epsilon value, 
    it is close enough to the root and is the answer, if x0 is not less than
    the epsilon value, this function will calculate for the next guess x1 and so on. */
double newtonApprox( double x0, function <double(double)> f, function <double(double)> fp, double e ); /* initial guess, function, derived function, epsilon */