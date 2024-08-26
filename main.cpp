#include "Person.hpp"

int main() {
    Person person("John", "Doe");
    Person person2("James", "Smith");
    Person person3("Mary", "Smith");
    Person person4("Evan", "Smith");

    greet(person);
    greet(person2);
    greet(person3);
    greet(person4);
    return 0;
}