#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

class Student {
private:
    std::string name;
    int attendance;
    std::vector<int> grades;

public:
    Student();
    void inputManual();
    void inputRandom();
    void display() const;
};

#endif // STUDENT_H