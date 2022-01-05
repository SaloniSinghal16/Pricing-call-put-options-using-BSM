//
//  Main.cpp
//  BSM_Final Project
//
//  Created by Saloni Singhal on 12/20/21.
//

#include<iostream>
#include "BSM.hpp"

using namespace std;


int main() {
    // First we create the parameter list
    double S = 100.0;  // Option price
    double K = 90.0;  // Strike price of the option
    double r = 0.05;   // Risk-free rate (5%)
    double v = 0.2;    // Volatility of the underlying (20%)
    double T = 1.0;    // Time to Maturity (One year)

//Create BSM object to store input (and later call member functions for pricing the option)
    BSM ob(100, 90, 0.05, 0.2, 1);


    // Then we calculate the call/put values by calling the member functions
    double call = ob.call_price(S, K, r, v, T);
    double put = ob.put_price(S, K, r, v, T);

    // Finally we output the parameters and prices of the options
    std::cout << "Underlying:      $" << S << std::endl;
    std::cout << "Strike:          $" << K << std::endl;
    std::cout << "Risk-Free Rate:  " << 100*r << "%" << std::endl;
    std::cout << "Volatility:      " << 100*v << "%" << std::endl;
    std::cout << "Maturity:        " << T << " Year(s)" << std::endl;

    std::cout << "Call Price:      $" << call << std::endl;
    std::cout << "Put Price:       $" << put << std::endl;

    return 0;
}
