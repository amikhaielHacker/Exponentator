//
//  main.cpp
//  ExponentCalc
//
//  Created by adi on 27.11.16.
//  Copyright © 2016 AmikhaielHacker. All rights reserved.
//

#include <iostream>
#include <math.h> //I imported this module for use the 'pow' function

using namespace std;

int main(int argc, const char * argv[]) {
    
    float base;
    float exponent;
    cout << "Enter the base number in decimal value..." << endl;
    cin >> base;
    cout << "Enter the exponent number in decimal value..." <<endl;
    cin >> exponent;
    cout << "The result is " << pow(base, exponent)<<endl; //Will be printed to the console the result.
    
}
