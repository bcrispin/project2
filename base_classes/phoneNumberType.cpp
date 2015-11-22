//
// Created by Brennan Crispin on 11/16/15.
//

#include <iostream>
#include "phoneNumberType.h"

void phoneNumberType::print() {
    std::cout << areaCode << "-" << prefix << "-" << lineNumber;
}

void phoneNumberType::setPhoneNumber(std::string number) {
    if (validatePhoneNumber(number))
    {
        phoneNumberType::areaCode = number.substr(0,2);
        phoneNumberType::prefix = number.substr(3,5);
        phoneNumberType::lineNumber = number.substr(6,8);
    }
    else
    {
        setPhoneNumber("000", "000", "0000");
    }
}

void phoneNumberType::setPhoneNumber(std::string areaCode, std::string prefix, std::string lineNumber) {
    if (validatePhoneNumber(areaCode+prefix+lineNumber))
    {
        phoneNumberType::areaCode = areaCode;
        phoneNumberType::prefix = prefix;
        phoneNumberType::lineNumber = lineNumber;
    }
}

bool phoneNumberType::validatePhoneNumber(std::string phoneNumber) {
    if (phoneNumber.length()  != 10)
        return false;
    for (std::string::iterator it = phoneNumber.begin(); it != phoneNumber.end(); ++it)
    {
        if (!isdigit(*it))
            return false;
    }
    return true;
}

std::string phoneNumberType::getPhoneNumber() {
    return areaCode + prefix + lineNumber;
}

phoneNumberType::phoneNumberType(std::string number) {
    setPhoneNumber(number);
}
