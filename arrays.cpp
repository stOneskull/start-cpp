#include <iostream>

int main() {
    std::string roster[] = {"Alice", "Bob", "Charlie", "Diana"};
    std::string firstName = roster[0];
    std::cout << "First name in the roster: " << firstName << "\n";
    roster[1] = "Robert";
    std::cout << "Updated second name in the roster: " << roster[1] << "\n";

    std::string recruits[4];
    recruits[0] = "Eve";
    recruits[1] = "Frank";
    std::cout << "First recruit: " << recruits[0] << "\n";
    std::cout << "Second recruit: " << recruits[1] << "\n"; 
    return 0;
}