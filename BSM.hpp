//
//  BSM.hpp
//  BSM_Final Project
//
//  Created by Saloni Singhal on 12/20/21.
//

#pragma once
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include "Norm.hpp"



// Standard normal probability density function


// This calculates d_j, for j in {1,2}. This term appears in the closed
// form solution for the European call or put price
double d_j(const int& j, const double& S, const double& K, const double& r, const double& v, const double& T);

class BSM
{
private:
    double spot;  // Option price
    double strike;// Strike price
    double rate;  // Risk-free rate
    double vol;    // Volatility of the underlying
    double maturity;   //

public:

    BSM(double spot, double strike, double rate, double vol, double maturity);
   
    double call_price(const double& S, const double& K, const double& r, const double& v, const double& T);
    double put_price(const double& S, const double& K, const double& r, const double& v, const double& T);


};

