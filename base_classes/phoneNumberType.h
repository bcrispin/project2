//
// Created by Brennan Crispin on 11/16/15.
//

#ifndef PROJECT2_PHONENUMBERTYPE_H
#define PROJECT2_PHONENUMBERTYPE_H

#include <string>

class phoneNumberType {
private:
    std::string areaCode;
    std::string prefix;
    std::string lineNumber;

public:
    void print();

    void setPhoneNumber(std::string number);
    void setPhoneNumber(std::string areaCode, std::string prefix, std::string lineNumber);

    bool validatePhoneNumber(std::string phoneNumber);

    std::string getPhoneNumber();

    phoneNumberType(std::string number = "0000000000");
};


#endif //PROJECT2_PHONENUMBERTYPE_H
