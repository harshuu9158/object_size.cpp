#include <iostream>

int main()
{
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    std::cout << std::boolalpha; // print bool as true or false rather than 1 or 0
    // std::noboolalpha; // print bool as 1 or 0 rather than true or false
    bool b {false};
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1
    return 0;
}
