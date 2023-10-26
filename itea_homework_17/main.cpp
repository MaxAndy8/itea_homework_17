#include <iostream>
#include <ctime>
#include <vector>
#include <Windows.h>
#include "Student.h"

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::vector<Student> students;

    // ��������� �������� �� ������
    std::tm birthDate1 = { 0, 0, 0,  1, 0, 100, 120 };
    std::tm birthDate2 = { 0, 0, 0, 15, 4,  99, 120 };
    students.emplace_back("ID1", "����" , "������"  , "AB123456", birthDate1, "��������� ���������� 1", "���������� 1", "������������ 1", "����� 1");
    students.emplace_back("ID2", "����", "��������", "CD789012", birthDate2, "��������� ���������� 2", "���������� 2", "������������ 2", "����� 2");

    // ��������� ������ ��������
    std::cout << "������ ��������:\n";
    for (const Student& student : students) {
        std::cout << "��'�:               " << student.getFirstName()       << std::endl;
        std::cout << "�������:           " << student.getLastName()        << std::endl;
        std::cout << "��. �������������: " << student.getId()              << std::endl;
        std::cout << "���������� ������:  " << student.getInstitution()     << std::endl;
        std::cout << "������������:      " << student.getMajor()           << std::endl;
        std::cout << "�����:              " << student.getGroup()           << std::endl;
        std::cout << "���� ����������:    " << student.getBirthDate().tm_mday << "." << student.getBirthDate().tm_mon + 1 << "." << 1900 + student.getBirthDate().tm_year << std::endl;
        std::cout << "�����. ����������:  " << student.getAdditionalInfo()  << std::endl;
        std::cout << std::endl;
    }

    return 0;
}