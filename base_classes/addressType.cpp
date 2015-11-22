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

const std::string addressType::getStreetName() {
    return addressType::streetName;
}

const int addressType::getStreetNumber() {
    return addressType::streetNumber;
}

const std::string addressType::getCity() {
    return addressType::city;
}

const std::string addressType::getState() {
    return addressType::state;
}

const int addressType::getZip() {
    return addressType::zip;
}

addressType::addressType(int streetNumber, std::string streetName, std::string city, std::string state, int zip) {
    addressType::setAddress(streetNumber, streetName, city, state, zip);
}
