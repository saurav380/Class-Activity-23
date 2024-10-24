#include "validate.hpp"

bool isValidCustomerNumber(const std::string& customerNumber) {
    // Logic for validating customer number (e.g., check for 2 letters and 4 digits)
    if (customerNumber.length() != 6) return false;

    // Check first two characters are alphabetic
    for (int i = 0; i < 2; ++i) {
        if (!isalpha(customerNumber[i])) return false;
    }

    // Check the last four characters are digits
    for (int i = 2; i < 6; ++i) {
        if (!isdigit(customerNumber[i])) return false;
    }

    return true;
}
