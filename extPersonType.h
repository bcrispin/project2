//
// Created by Brennan Crispin on 11/16/15.
//

#ifndef PROJECT2_EXTPERSONTYPE_H
#define PROJECT2_EXTPERSONTYPE_H

#include "base_classes/personType.h"
#include "base_classes/addressType.h"
#include "base_classes/dateType.h"
#include "base_classes/phoneNumberType.h"

class extPersonType : public personType, public addressType, public phoneNumberType, public dateType{
    enum Relationship{
        FRIEND,
        FAMILY,
        BUSINESS
    };
private:
    addressType address;
    dateType birthday;
    phoneNumberType phoneNumber;
    extPersonType * nextPerson;
    Relationship relationship;

public:
    extPersonType(addressType address,
                  dateType birthday,
                  phoneNumberType number,
                  Relationship relationship);


    void print();

    void setAddress(addressType address);
    void setBirthday(dateType birthday);
    void setPhoneNumber(phoneNumberType number);
    void setNextPerson(extPersonType * person);
    void setRelationship(Relationship relationship);

    addressType getAddress() const;
    dateType getBirthday() const;
    phoneNumberType getPhoneNumber() const;
    extPersonType * getNextPerson() const;
    Relationship getRelationship() const;
    std::string getRelationshipString() const;
};


#endif //PROJECT2_EXTPERSONTYPE_H
