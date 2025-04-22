#include <iostream>
#include "math_operations.h"

int main() {
    int x, y;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;

    std::cout << "Sum: " << add(x, y) << std::endl;
    std::cout << "Difference: " << subtract(x, y) << std::endl;
    std::cout << "Product: " << multiply(x, y) << std::endl;

    return 0;
}
