//
// Created by Brennan Crispin on 11/15/15.
//

#include "addressType.h"

void addressType::print() {

}

void addressType::setAddress(int streetNumber, std::string streetName, std::string city, std::string state, int zip) {
    addressType::streetNumber = streetNumber;
    addressType::streetName = streetName;
    addressType::city = city;
    addressType::state = state;
    addressType::zip = zip;
}

const std::string addressType::getStreetName() const {
    return addressType::streetName;
}

const int addressType::getStreetNumber() const {
    return addressType::streetNumber;
}

const std::string addressType::getCity() const {
    return addressType::city;
}

const std::string addressType::getState() const{
    return addressType::state;
}

const int addressType::getZip() const {
    return addressType::zip;
}

addressType::addressType(int streetNumber, std::string streetName, std::string city, std::string state, int zip) {
    addressType::setAddress(streetNumber, streetName, city, state, zip);
}

bool addressType::operator>(const addressType &rightAdd) {
    if (addressType::getState() > rightAdd.getState() ||
        (addressType::getState() == rightAdd.getState() && addressType::getCity() > rightAdd.getCity()) ||
            addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity() && addressType::streetName > rightAdd.getStreetName() ||
                addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity()
                && addressType::streetName == rightAdd.getStreetName() && addressType::streetNumber > rightAdd.streetNumber)
        return true;
    else
        return false;
}

bool addressType::operator>=(const addressType &rightAdd) {
    if (addressType::getState() >= rightAdd.getState() ||
        (addressType::getState() == rightAdd.getState() && addressType::getCity() >= rightAdd.getCity()) ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity() && addressType::streetName >= rightAdd.getStreetName() ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity()
        && addressType::streetName == rightAdd.getStreetName() && addressType::streetNumber >= rightAdd.streetNumber)
        return true;
    else
        return false;
}

bool addressType::operator<=(const addressType &rightAdd) {
    if (addressType::getState() <= rightAdd.getState() ||
        (addressType::getState() == rightAdd.getState() && addressType::getCity() <= rightAdd.getCity()) ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity() && addressType::streetName <= rightAdd.getStreetName() ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity()
        && addressType::streetName == rightAdd.getStreetName() && addressType::streetNumber <= rightAdd.streetNumber)
        return true;
    else
        return false;
}

bool addressType::operator<(const addressType &rightAdd) {
    if (addressType::getState() < rightAdd.getState() ||
        (addressType::getState() == rightAdd.getState() && addressType::getCity() < rightAdd.getCity()) ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity() && addressType::streetName < rightAdd.getStreetName() ||
        addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity()
        && addressType::streetName == rightAdd.getStreetName() && addressType::streetNumber < rightAdd.streetNumber)
        return true;
    else
        return false;
}

bool addressType::operator==(const addressType &rightAdd) {
    return addressType::state == rightAdd.getState() && addressType::city == rightAdd.getCity()
           && addressType::streetName == rightAdd.getStreetName()
           && addressType::streetNumber == rightAdd.streetNumber && addressType::zip == rightAdd.getZip();

}
