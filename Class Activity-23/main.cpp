#include <iostream>
#include "validate.hpp"

int main() {
    std::string customerNumber;

    std::cout << "Enter a customer number: ";
    std::cin >> customerNumber;

    if (isValidCustomerNumber(customerNumber)) {
        std::cout << "Valid customer number!" << std::endl;
    }
    else {
        std::cout << "Invalid customer number." << std::endl;
    }

    return 0;
}
