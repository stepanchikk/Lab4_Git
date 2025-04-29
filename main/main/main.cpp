#include <iostream>
#include <vector>
#include <ctime>
#include "Student.h"

int main() {
    srand(static_cast<unsigned int>(time(0)));

    std::vector<Student> students;
    int count;
    std::cout << "Скільки студентів ви хочете ввести? ";
    std::cin >> count;
    std::cin.ignore();

    for (int i = 0; i < count; ++i) {
        std::cout << "\nСтудент #" << i + 1 << ":\n";
        std::cout << "1 - Ввести вручну\n2 - Згенерувати випадково\nВаш вибір: ";
        int choice;
        std::cin >> choice;
        std::cin.ignore();
        Student s;
        if (choice == 1)
            s.inputManual();
        else
            s.inputRandom();
        students.push_back(s);
    }

    std::cout << "\n--- Список студентів ---\n";
    for (const auto& student : students) {
        student.display();
        std::cout << "------------------------\n";
    }

    return 0;
}
