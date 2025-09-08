#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using numvec = std::vector<int>;
using strvec = std::vector<std::string>;


int main() {
    numvec numbers = {1, 2, 3, 4, 5};

    // Adding an element to the end of the vector
    numbers.push_back(6);

    // Accessing elements
    cout << "First element: " << numbers[0] << endl;
    cout << "Second element: " << numbers.at(1) << endl;

    // Iterating through the vector
    cout << "All elements: ";

    for (const int& num : numbers)
        cout << num << " ";
    cout << endl;

    // Removing the last element
    numbers.pop_back();

    cout << "After pop_back, size: " << numbers.size() << endl;

    // Example with strings
    strvec words = {"Hello", "World"};

    words.push_back("C++");

    for (const auto& word : words)
        cout << word << " ";
    cout << endl;

    words.pop_back();
    cout << "After pop_back, size: " << words.size() << endl;
    cout << words[0] << " " << words[1] << endl;

    words.insert(words.begin() + 1, "Beautiful");

    for (const auto& word : words)
        cout << word << " ";
    cout << endl;

    return 0;
}