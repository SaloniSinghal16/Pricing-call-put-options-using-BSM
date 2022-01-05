//
//  Norm.cpp
//  BSM_Final Project
//
//  Created by Saloni Singhal on 12/20/21.
//

#include<iostream>
#include "Norm.hpp"
#include<cmath>
#define M_PI  3.1416

double norm::norm_pdf(const double& x) {
    return (1.0 / (pow(2 * M_PI, 0.5))) * pow(2.73,(-0.5 * x * x));
}

// An approximation to the cumulative distribution function
// for the standard normal distribution
// Note: This is a recursive function
double norm::norm_cdf(const double& x) {
    double k = 1.0 / (1.0 + 0.2316419 * x);
    double k_sum = k * (0.319381530 + k * (-0.356563782 + k * (1.781477937 + k * (-1.821255978 + 1.330274429 * k))));

    if (x >= 0.0) {
        return (1.0 - (1.0 / (pow(2 * M_PI, 0.5))) * pow(2.73, (-0.5 * x * x)) * k_sum);
    }
    else {
        return 1.0 - norm_cdf(-x);
    }
}
