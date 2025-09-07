#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Adding an element to the end of the vector
    numbers.push_back(6);

    // Accessing elements
    std::cout << "First element: " << numbers[0] << std::endl;
    std::cout << "Second element: " << numbers.at(1) << std::endl;

    // Iterating through the vector
    std::cout << "All elements: ";
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Removing the last element
    numbers.pop_back();
    std::cout << "After pop_back, size: " << numbers.size() << std::endl;

    // Example with strings
    std::vector<std::string> words = {"Hello", "World"};
    words.push_back("C++");
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;
    words.pop_back();
    std::cout << "After pop_back, size: " << words.size() << std::endl;
    std::cout << words[0] << " " << words[1] << std::endl;
    words.insert(words.begin() + 1, "Beautiful");
    for (const auto& word : words) {
        std::cout << word << " ";
    }
    std::cout << std::endl;

    return 0;
}