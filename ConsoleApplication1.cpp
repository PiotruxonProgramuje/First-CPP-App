#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout << "How old are you? : ";
    std::cin >> age;

    if (age <= 13) {
        std::cout << "Your age group is 1-13\n";
    }
    else if (age >= 14 && age < 18) {
        std::cout << "Your age group is 14-17\n";
    }
    else if (age >= 18 && age < 30) {
        std::cout << "Your age group is 18-30\n";
    }
    else if (age >= 30) {
        std::cout << "Your age group is 30+\n";
    }

    std::cout << "Whats your name? :";
    std::cin >> name;

    std::cout << "You are " << age << " years old\n";
    std::cout << "Your name is " << name << "\n";
    std::cout << "App created by Piotruxon (v1.665)\n";

    std::cout << "Press ENTER to close the app...\n";
    std::cin.ignore(); // Ignoruje pozostałe dane w buforze
    std::cin.get();    // Czeka na wciśnięcie Enter

    return 0;
}
