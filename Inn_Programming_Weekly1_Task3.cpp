//Task 3

#include <iostream>

int age;

int main()
{
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << "Thats not a number..." << std::endl;
        std::cout << "How old are you? ";
        std::cin >> age;
    }
    if (age < 20) {
        std::cout << "You are young";
    }
    else if (40 >= age && age >= 20) {
        std::cout << "You are a grown up";
    }
    else if (59 >= age && age >= 41) {
        std::cout << "You are old";
    }
    else if (age >= 60) {
        std::cout << "You ARE really old";
    }
}
