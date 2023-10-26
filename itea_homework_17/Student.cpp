#include "Student.h"

Student::Student(const std::string& id, const std::string& firstName, const std::string& lastName, const std::string& passportNumber, const std::tm& birthDate, const std::string& additionalInfo, const std::string& institution, const std::string& major, const std::string& group)
    : Person(id, firstName, lastName, passportNumber, birthDate, additionalInfo), institution(institution), major(major), group(group) {}

std::string Student::getInstitution() const {
    return institution;
}

std::string Student::getMajor() const {
    return major;
}

std::string Student::getGroup() const {
    return group;
}

void Student::setInstitution(const std::string& newInstitution) {
    institution = newInstitution; 
}
void Student::setMajor(const std::string& newMajor) {
    major = newMajor; 
}
void Student::setGroup(const std::string& newGroup) {
    group = newGroup; 
}

Student::~Student()
{
}
