#include "Student.h"
#include <cstdlib>
#include <ctime>

Student::Student() : name("Unknown"), attendance(0) {}

void Student::inputManual() {
    std::cout << "Введіть ім'я студента: ";
    std::getline(std::cin, name);
    std::cout << "Скільки занять відвідав студент? ";
    std::cin >> attendance;

    int n;
    std::cout << "Скільки оцінок у студента? ";
    std::cin >> n;
    grades.clear();
    for (int i = 0; i < n; ++i) {
        int grade;
        std::cout << "Оцінка #" << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
    }
    std::cin.ignore();
}

void Student::inputRandom() {
    static const std::string names[] = { "Олег", "Аня", "Ірина", "Дмитро", "Сергій", "Катя" };
    name = names[rand() % 6];
    attendance = rand() % 20 + 1;
    int n = rand() % 5 + 1;
    grades.clear();
    for (int i = 0; i < n; ++i) {
        grades.push_back(rand() % 5 + 1);
    }
}

void Student::display() const {
    std::cout << "Ім'я: " << name << std::endl;
    std::cout << "Відвідано занять: " << attendance << std::endl;
    std::cout << "Оцінки: ";
    for (int grade : grades) {
        std::cout << grade << " ";
    }
    std::cout << std::endl;
}
