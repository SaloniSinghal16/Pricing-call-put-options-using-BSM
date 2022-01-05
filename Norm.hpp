//
//  Norm.hpp
//  BSM_Final Project
//
//  Created by Saloni Singhal on 12/20/21.
//

#pragma once
#include<iostream>

class norm
{
private:
    double x;
public:
    
    double norm_pdf(const double& x);

    // An approximation to the cumulative distribution function
    // for the standard normal distribution
    // Note: This is a recursive function
    double norm_cdf(const double& x);
};
