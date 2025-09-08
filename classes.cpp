#include <iostream>


class User {
    public:
    std::string name;
    int age;
    bool isLoggedIn;

    User(std::string userName, int userAge) {
        name = userName;
        age = userAge;
        isLoggedIn = true;
    }
    
    void changeLoginStatus() {
        isLoggedIn = !isLoggedIn;
    }
};


int main() {
    User dan = User("Dan", 50);
    User bob = User("Bob", 30);

    std::cout << dan.name << " is " << dan.age << " years old." << std::endl;

    std::cout << "Is " << bob.name << " logged in? " << bob.isLoggedIn << std::endl;
    bob.changeLoginStatus();
    std::cout << "Is " << bob.name << " logged in? " << bob.isLoggedIn << std::endl;
    
    return 0;
}