//
// Created by Brennan Crispin on 11/16/15.
//

#include "PersonList.h"

PersonList::PersonList() {
    initializeList();
}

void PersonList::initializeList() {
    first = nullptr;
    last = nullptr;
    contactSize = 0;
}

bool PersonList::isEmpty() {
    return PersonList::contactSize == 0;
}

void PersonList::print() const {
    extPersonType * personToPrint;
    personToPrint = first;
    while (personToPrint != nullptr)
    {
        personToPrint->print();
        personToPrint = personToPrint->getNextPerson();
    }
}

int PersonList::length() {
    return contactSize;
}

void PersonList::destroyList() {
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

extPersonType PersonList::front() const {
    return *first;
}

extPersonType PersonList::back() const {
    return *last;
}

void PersonList::insertFirst(extPersonType *newPerson) {
    extPersonType * person = first;
    newPerson->setNextPerson(person);
    first = newPerson;
    ++contactSize;
}

void PersonList::insertLast(extPersonType * newPerson) {
    last->setNextPerson(newPerson);
    last = newPerson;
    ++contactSize;
}

PersonList::PersonList(const PersonList &otherManager) {
    first = otherManager.first;
    last = otherManager.last;
    contactSize = otherManager.contactSize;
}

PersonList::~PersonList() {
    destroyList();
}
