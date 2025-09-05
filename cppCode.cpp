#include <iostream> // include standard library

// line comment.. main is first to run
// int means function returns an integer
// void means function returns nothing
int main() {
    std::string input;
    std::cout << "Enter input: " << "\n"; // std is standard library namespace
    std::cin >> input;
    std::cout << "You entered: " << input << "\n";
    return 0;
}