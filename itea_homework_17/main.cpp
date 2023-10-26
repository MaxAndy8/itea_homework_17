#include <iostream>
#include <ctime>
#include <vector>
#include <Windows.h>
#include "Student.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::vector<Student> students;

    // Додавання студентів до списку
    std::tm birthDate1 = { 0, 0, 0,  1, 0, 100, 120 };
    std::tm birthDate2 = { 0, 0, 0, 15, 4,  99, 120 };
    students.emplace_back("ID1", "Іван" , "Петров"  , "AB123456", birthDate1, "Додаткова інформація 1", "Університет 1", "Спеціальність 1", "Група 1");
    students.emplace_back("ID2", "Марія", "Сидорова", "CD789012", birthDate2, "Додаткова інформація 2", "Університет 2", "Спеціальність 2", "Група 2");

    // Виведення списку студентів
    std::cout << "Список студентів:\n";
    for (const Student& student : students) {
        std::cout << "Ім'я:               " << student.getFirstName()       << std::endl;
        std::cout << "Прізвище:           " << student.getLastName()        << std::endl;
        std::cout << "Уні. ідентифікатор: " << student.getId()              << std::endl;
        std::cout << "Навчальний заклад:  " << student.getInstitution()     << std::endl;
        std::cout << "Спеціальність:      " << student.getMajor()           << std::endl;
        std::cout << "Група:              " << student.getGroup()           << std::endl;
        std::cout << "Дата народження:    " << student.getBirthDate().tm_mday << "." << student.getBirthDate().tm_mon + 1 << "." << 1900 + student.getBirthDate().tm_year << std::endl;
        std::cout << "Додат. інформація:  " << student.getAdditionalInfo()  << std::endl;
        std::cout << std::endl;
    }

    return 0;
}