#include "Person.hpp"

#include <iostream>
#include <ostream>

Person::Person(const std::string_view firstName, const std::string_view lastName) : m_firstName(firstName), m_lastName(lastName){
}

std::string Person::getFirstName() const {
    return m_firstName;
}

std::string Person::getLastName() const {
    return m_lastName;
}

std::string Person::getName() const {
    return m_firstName + " " + m_lastName;
}

void greet(const Person &person) {
    std::cout << "Hey " << person.getName() << std::endl;
}
