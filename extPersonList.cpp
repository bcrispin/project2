//
// Created by Brennan Crispin on 11/21/15.
//

#include "extPersonList.h"

extPersonList::extPersonList() {
    initializeList();
}

void extPersonList::initializeList() {
    first = nullptr;
    last = nullptr;
    contactSize = 0;
}

bool extPersonList::isEmpty() {
    return extPersonList::contactSize == 0;
}

void extPersonList::print() const {
    extPersonType * personToPrint;
    personToPrint = first;
    while (personToPrint != nullptr)
    {
        personToPrint->print();
        personToPrint = personToPrint->getNextPerson();
    }
}

int extPersonList::length() {
    return contactSize;
}

void extPersonList::destroyList() {
    extPersonType * personToDestroy;
    personToDestroy = first;
    while (personToDestroy != nullptr)
    {
        extPersonType * nextPerson = personToDestroy->getNextPerson();
        delete personToDestroy;
        personToDestroy = nextPerson;
    }
    contactSize = 0;
}

extPersonType extPersonList::front() const {
    return *first;
}

extPersonType extPersonList::back() const {
    return *last;
}

void extPersonList::insertFirst(extPersonType *newPerson) {
    extPersonType * person = first;
    newPerson->setNextPerson(person);
    first = newPerson;
    ++contactSize;
}

void extPersonList::insertLast(extPersonType * newPerson) {
    last->setNextPerson(newPerson);
    last = newPerson;
    ++contactSize;
}

extPersonList::extPersonList(const extPersonList &otherManager) {
    first = otherManager.first;
    last = otherManager.last;
    contactSize = otherManager.contactSize;
}

extPersonList::~extPersonList() {
    destroyList();
}
