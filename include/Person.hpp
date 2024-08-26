#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class Person {
public:
    Person(std::string_view firstName, std::string_view lastName);
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getName() const;

private:
    std::string m_firstName;
    std::string m_lastName;
};

void greet(const Person &person);

#endif //PERSON_HPP
