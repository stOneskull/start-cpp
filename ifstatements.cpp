#include <iostream>

int main() {
    std::string key = "zebra";
    // Example of an if statement
    if (key == "true") {
        std::cout << "Condition is true." << std::endl;
    } else if (key == "false") {
        std::cout << "Condition is false." << std::endl;
    } else {
        std::cout << "Condition is " << key << std::endl;
    }
    return 0;
}