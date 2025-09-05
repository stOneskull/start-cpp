#include <iostream>

int main() {
    int myNum = 5;               // integer (whole number)
    float myFloatNum = 5.99;    // floating point number - 32bit
    double myDoubleNum = 9.98;   // double floating point number - 64bit
    char myLetter = 'D';        // character
    bool myBoolean = true;       // boolean
    std::string myText = "Hello"; // string

    std::cout << "Integer: " << myNum << "\n";
    std::cout << "Float: " << myFloatNum << "\n";
    std::cout << "Double: " << myDoubleNum << "\n";
    std::cout << "Character: " << myLetter << "\n";
    std::cout << "Boolean: " << myBoolean << "\n";
    std::cout << "String: " << myText << "\n";

    return 0;
}