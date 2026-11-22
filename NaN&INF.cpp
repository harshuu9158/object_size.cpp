#include <iostream>

int main() {

    double posinf { 5.0 / 0.0 }; // positive infinity
    std::cout << "Positive Infinity: " << posinf << std::endl;

    double neginf { -5.0 / 0.0 }; // negative infinity
    std::cout << "Negative Infinity: " << neginf << std::endl;

    double z1 { 0.0 / 5.0 }; // positive zero
    std::cout << "Positive Zero: " << z1 << std::endl;

    double z2 { -0.0 / 5.0 }; // negative zero
    std::cout << "Negative Zero: " << z2 << std::endl;

    double nan { 0.0 / 0.0 }; // not a number
    std::cout << "NaN: " << nan << std::endl;

    
    

}