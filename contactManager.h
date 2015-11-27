//
// Created by Brennan Crispin on 11/21/15.
//

#ifndef PROJECT2_CONTACTMANAGER_H
#define PROJECT2_CONTACTMANAGER_H

#include <vector>
#include "extPersonType.h"
#include "extPersonList.h"


class contactManager
{
private:
    std::vector<extPersonType> contactList;

public:
    void insertPerson(extPersonType person);
    void deletePerson(int index);
    void print();
    int length();

    int findPerson(std::string LastName);
    extPersonList sortListByDate(dateType firstDate, dateType lastDate);
    extPersonList sortListByAddress(addressType firstAddress, addressType lastAddress);
    extPersonList sortListByPhone(phoneNumberType firstNumber, phoneNumberType lastNumber);
    extPersonList sortListByName(std::string firstLastName, std::string lastLastName);

};


#endif //PROJECT2_CONTACTMANAGER_H
