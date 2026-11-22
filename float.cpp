#include <iostream>
#include <limits>
#include <iomanip>

int main()
{
    std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
    std::cout << "float: " << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << "double: " << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';

    std::cout << "float: " << 3.4e38 << '\n';

    std::cout << std::setprecision(20); // set precision to 20 digits
    std::cout << 3.3333333333333333333333333333333333333f <<'\n'; // flat literal with many digits

   
    std::cout << 3.3333333333333333333333333333333333333 <<'\n'; // double literal with many digits
    
    
    std::cout << 3.3333333333333333333333333333333333333L <<'\n'; // long double literal with many digitss

    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    return 0;


    
}

