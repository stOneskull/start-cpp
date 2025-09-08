#include <iostream>

int move(int pos, int byAmount = 1) {
    int newPos = pos + byAmount;
    return newPos;
}

int main() {
    int pos = 0;
    pos = move(pos, 5);
    std::cout << pos << "\n";

    return 0;
}