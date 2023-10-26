#include "Person.h"

Person::Person(const std::string& id            , 
               const std::string& firstName     , 
               const std::string& lastName      , 
               const std::string& passportNumber, 
               const std::tm&     birthDate     , 
               const std::string& additionalInfo)
    : id(id),               firstName(firstName), 
      lastName(lastName),   passportNumber(passportNumber), 
      birthDate(birthDate), additionalInfo(additionalInfo) {}

std::string Person::getId() const {
    return id;
}

std::string Person::getFirstName() const {
    return firstName;
}

std::string Person::getLastName() const {
    return lastName;
}

std::string Person::getPassportNumber() const {
    return passportNumber;
}

std::tm Person::getBirthDate() const {
    return birthDate;
}

std::string Person::getAdditionalInfo() const {
    return additionalInfo;
}

void Person::setId(const std::string& newId) {
    id = newId;
}

void Person::setFirstName(const std::string& newFirstName) {
    firstName = newFirstName;
}

void Person::setLastName(const std::string& newLastName) {
    lastName = newLastName;
}

void Person::setPassportNumber(const std::string& newPassportNumber) {
    passportNumber = newPassportNumber;
}

void Person::setBirthDate(const std::tm& newBirthDate) {
    birthDate = newBirthDate;
}

void Person::setAdditionalInfo(const std::string& newAdditionalInfo) {
    additionalInfo = newAdditionalInfo;
}

Person::~Person()
{
}

