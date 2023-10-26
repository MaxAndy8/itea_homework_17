#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    std::string institution;
    std::string major      ;
    std::string group      ;

public:
    Student(const std::string& id             , 
            const std::string& firstName      , 
            const std::string& lastName       , 
            const std::string& passportNumber , 
            const std::tm&     birthDate      , 
            const std::string& additionalInfo , 
            const std::string& institution    , 
            const std::string& major          , 
            const std::string& group          );

    virtual std::string getInstitution() const;
    virtual std::string getMajor() const;
    virtual std::string getGroup() const;

    virtual void setInstitution(const std::string& newInstitution);
    virtual void setMajor(const std::string& newMajor);
    virtual void setGroup(const std::string& newGroup);

    virtual ~Student();
};

#endif
