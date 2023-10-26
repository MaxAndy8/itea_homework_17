#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <ctime>

class Person {
protected:
    std::string id;               // id Á‡Ï≥ÒÚ¸ –ÕŒ œœ;
    std::string firstName;
    std::string lastName;
    std::string passportNumber;
    std::tm birthDate;
    std::string additionalInfo;

public:
    Person(const std::string&   id              , 
           const std::string&   firstName       , 
           const std::string&   lastName        , 
           const std::string&   passportNumber  , 
           const std::tm&       birthDate       , 
           const std::string&   additionalInfo  );

    virtual std::string getId() const;
    virtual std::string getFirstName() const;
    virtual std::string getLastName() const;
    virtual std::string getPassportNumber() const;
    virtual std::tm     getBirthDate() const;
    virtual std::string getAdditionalInfo() const;

    virtual void setId(const std::string& newId);
    virtual void setFirstName(const std::string& newFirstName);
    virtual void setLastName(const std::string& newLastName);
    virtual void setPassportNumber(const std::string& newPassportNumber);
    virtual void setBirthDate(const std::tm& newBirthDate);
    virtual void setAdditionalInfo(const std::string& newAdditionalInfo);
    
    virtual ~Person();
};

#endif

