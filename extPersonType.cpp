//
// Created by Brennan Crispin on 11/16/15.
//

#include "extPersonType.h"
#include <iostream>

extPersonType::extPersonType(addressType address,
                             dateType birthday,
                             phoneNumberType number,
                             extPersonType::Relationship relationship): addressType(), dateType(), phoneNumberType()
{
    extPersonType::address = address;
    extPersonType::birthday = birthday;
    extPersonType::phoneNumber = number;
    extPersonType::nextPerson = nullptr;
    extPersonType::relationship = relationship;
}

void extPersonType::print() {
    personType::print();
    address.print();
    birthday.printDate();
    phoneNumber.print();
    std::cout << getRelationshipString();
}

void extPersonType::setAddress(addressType address) {
    extPersonType::address = address;
}

void extPersonType::setBirthday(dateType birthday) {
    extPersonType::birthday = birthday;
}

void extPersonType::setPhoneNumber(phoneNumberType number) {
    extPersonType::phoneNumber = number;
}

void extPersonType::setNextPerson(extPersonType *person) {
    extPersonType::nextPerson = person;
}

void extPersonType::setRelationship(extPersonType::Relationship relationship) {
    extPersonType::relationship = relationship;
}

addressType extPersonType::getAddress() const {
    return extPersonType::address;
}

dateType extPersonType::getBirthday() const {
    return extPersonType::birthday;
}

phoneNumberType extPersonType::getPhoneNumber() const {
    return extPersonType::phoneNumber;
}

extPersonType * extPersonType::getNextPerson() const {
    return extPersonType::nextPerson;
}

extPersonType::Relationship extPersonType::getRelationship() const {
    return extPersonType::relationship;
}

std::string extPersonType::getRelationshipString() const {
    switch(extPersonType::relationship)
    {
        case FRIEND:
            return "FRIEND";
        case FAMILY:
            return "FAMILY";
        case BUSINESS:
            return "BUSINESS";
        default:
            return "NONE";
    }
}

extPersonType::extPersonType(const extPersonType &person)
{
    extPersonType::address = person.getAddress();
    extPersonType::birthday = person.getBirthday();
    extPersonType::phoneNumber = person.getPhoneNumber();
    extPersonType::nextPerson = nullptr;
    extPersonType::relationship = person.getRelationship();
}
