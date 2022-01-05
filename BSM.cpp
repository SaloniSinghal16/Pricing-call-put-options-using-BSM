//
//  BSM.cpp
//  BSM_Final Project
//
//  Created by Saloni Singhal on 12/20/21.
//

#include<iostream>
#include<cmath>
#include "BSM.hpp"
using namespace std;

double d_j(const int& j, const double& S, const double& K, const double& r, const double& v, const double& T) {
    return (log(S / K) + (r + (pow(-1, j - 1)) * 0.5 * v * v) * T) / (v * (pow(T, 0.5)));
}

  BSM::BSM(double spot, double strike, double rate, double vol, double maturity):spot(spot),strike(strike),rate(rate),vol(vol),maturity(maturity)
    {
        
    }

  double BSM::call_price(const double& S, const double& K, const double& r, const double& v, const double& T) {
      norm ob;
      return S * ob.norm_cdf(d_j(1, S, K, r, v, T)) - K * pow(2.73, (-r * T)) * ob.norm_cdf(d_j(2, S, K, r, v, T));
  }

  // Calculate the European vanilla put price based on
  // underlying S, strike K, risk-free rate r, volatility of
  // underlying sigma and time to maturity T
  double BSM::put_price(const double& S, const double& K, const double& r, const double& v, const double& T) {
      norm ob;
      return -S * ob.norm_cdf(-d_j(1, S, K, r, v, T)) + K * pow(2.73, (-r * T)) * ob.norm_cdf(-d_j(2, S, K, r, v, T));
  }
