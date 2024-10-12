#include <iostream>

int main()
{
    std::string name;
    int age;
    std::cout << "Ile masz lat? : ";
    std::cin >> age;

    if (age <= 13) {
        std::cout << "Twoja grupa wiekowa to 1-13\n";
    }
    else if (age >= 14 && age < 18) {
        std::cout << "Twoja grupa wiekowa to 14-17\n";
    }
    else if (age >= 18 && age < 30) {
        std::cout << "Twoja grupa wiekowa to 18-30\n";
    }
    else if (age >= 30) {
        std::cout << "Twoja grupa wiekowa to 30+\n";
    }

    std::cout << "Jak masz na imie? :";
    std::cin >> name;

    std::cout << "Masz " << age << " lat\n";
    std::cout << "Twoje imie to " << name << "\n";
    std::cout << "Program stworzony przez Piotruxona v1.665\n";

    std::cout << "Nacisnij Enter, aby zamknac program...\n";
    std::cin.ignore(); // Ignoruje pozostałe dane w buforze
    std::cin.get();    // Czeka na wciśnięcie Enter

    return 0;
}
