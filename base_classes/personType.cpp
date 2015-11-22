//
// Created by Brennan Crispin on 11/15/15.
//

#include "personType.h"

void personType::print() const {

}

void personType::setName(string first, string last) {
    personType::firstName = firstName;
    personType::lastName = lastName;
}

string personType::getFirstName() const {
    return firstName;
}

string personType::getLastName() const {
    return lastName;
}

personType::personType(string first, string last) {

}
