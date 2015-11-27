//
// Created by Brennan Crispin on 11/21/15.
//

#include "contactManager.h"
#include "searchAndSort.h"

int contactManager::findPerson(std::string lastName) {
    int first = 0;
    int last = contactList.size();
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (contactList[mid].getLastName() == lastName)
            return mid;
        else if (lastName < contactList[mid].getLastName())
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1;
}

extPersonList contactManager::sortListByDate(dateType firstDate, dateType lastDate) {
    extPersonList * sortedList = new extPersonList();
    for (std::vector<extPersonType>::iterator it = contactList.begin(); it < contactList.end(); ++it)
    {
        dateType birthday = it->getBirthday();
        if (birthday >= firstDate && birthday <= lastDate) {
            extPersonType * personToInsert;
            personToInsert = new extPersonType(*it);
            sortedList->insertFirst(personToInsert);
        }
    }
}

extPersonList contactManager::sortListByAddress(addressType firstAddress, addressType lastAddress) {
    extPersonList * sortedList = new extPersonList();
    for (std::vector<extPersonType>::iterator it = contactList.begin(); it < contactList.end(); ++it)
    {
        addressType address = it->getAddress();
        if (address >= firstAddress && address <= lastAddress) {
            extPersonType * personToInsert;
            personToInsert = new extPersonType(*it);
            sortedList->insertFirst(personToInsert);
        }
    }
}

extPersonList contactManager::sortListByPhone(phoneNumberType firstPhoneNumber, phoneNumberType lastPhoneNumber) {
    extPersonList * sortedList = new extPersonList();
    for (std::vector<extPersonType>::iterator it = contactList.begin(); it != contactList.end(); ++it)
    {
        phoneNumberType phoneNumber = it->getPhoneNumber();
        if (phoneNumber >= firstPhoneNumber && phoneNumber <= lastPhoneNumber) {
            extPersonType * personToInsert;
            personToInsert = new extPersonType(*it);
            sortedList->insertFirst(personToInsert);
        }
    }
}

extPersonList contactManager::sortListByName(std::string firstLastName, std::string lastLastName) {
    extPersonList * sortedList = new extPersonList();
    for (std::vector<extPersonType>::iterator it = contactList.begin(); it < contactList.end(); ++it)
    {
        std::string lastName = it->getLastName();
        if (lastName >= firstLastName && lastName <= lastLastName) {
            extPersonType * personToInsert;
            personToInsert = new extPersonType(*it);
            sortedList->insertFirst(personToInsert);
        }
    }
}

void contactManager::insertPerson(extPersonType person) {
    std::vector<extPersonType>::iterator it;
    for (it = contactList.begin(); it != contactList.end(); ++it)
    {
        if (person.getLastName() >= it->getLastName())
            contactList.insert(++it, person);
    }
}

void contactManager::deletePerson(int index) {
    contactList.erase(contactList.begin() + index);
}

void contactManager::print() {
    std::vector<extPersonType>::iterator it;
    for (it = contactList.begin(); it != contactList.end(); ++it)
    {
        it->print();
    }
}

int contactManager::length() {
    return contactList.size();
}
