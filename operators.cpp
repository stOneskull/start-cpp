#include <iostream>

int main() {
    // Assignment: =
    int a = 10;
    std::cout << "Value of a: " << a << "\n";

    // Arithmetic Operators: +, -, *, /, %
    int sum = a + 5;
    std::cout << "Sum with 5: " << sum << "\n";
    int diff = a - 3;
    std::cout << "Difference with 3: " << diff << "\n";
    int prod = a * 2;
    std::cout << "Product with 2: " << prod << "\n";
    int quot = a / 2;
    std::cout << "Quotient with 2: " << quot << "\n";
    int mod = a % 3;
    std::cout << "Modulus with 3: " << mod << "\n";

    // Comparison Operators: ==, !=, >, <, >=, <=
    bool isEqual = (a == 10);
    std::cout << "Is a equal to 10? " << isEqual << "\n";
    bool isNotEqual = (a != 5);
    std::cout << "Is a not equal to 5? " << isNotEqual << "\n";
    bool isGreater = (a > 5);
    std::cout << "Is a greater than 5? " << isGreater << "\n";
    bool isLess = (a < 15);
    std::cout << "Is a less than 15? " << isLess << "\n";
    bool isGreaterEqual = (a >= 10);
    std::cout << "Is a greater than or equal to 10? " << isGreaterEqual << "\n";
    bool isLessEqual = (a <= 10);
    std::cout << "Is a less than or equal to 10? " << isLessEqual << "\n";

    // Logical Operators: &&, ||, !
    bool logicalAnd = (isEqual && isGreater);
    std::cout << "Is a equal to 10 AND greater than 5? " << logicalAnd << "\n";
    bool logicalOr = (isEqual || isNotEqual);
    std::cout << "Is a equal to 10 OR not equal to 5? " << logicalOr << "\n";
    bool logicalNot = !isNotEqual;
    std::cout << "Is a equal to 5? " << logicalNot << "\n";

    // Increment and Decrement: ++, --
    a++;
    std::cout << "Value of a after increment: " << a << "\n";
    a--;
    std::cout << "Value of a after decrement: " << a << "\n";

    // Compound Assignment: +=, -=, *=, /=, %=
    a += 5;
    std::cout << "Value of a after adding 5: " << a << "\n";
    a -= 3;
    std::cout << "Value of a after subtracting 3: " << a << "\n";
    a *= 2;
    std::cout << "Value of a after multiplying by 2: " << a << "\n";
    a /= 2;
    std::cout << "Value of a after dividing by 2: " << a << "\n";
    a %= 3;
    std::cout << "Value of a after modulus by 3: " << a << "\n";
}