//
// Created by Brennan Crispin on 11/16/15.
//

#ifndef PROJECT2_CONTACTMANAGER_H
#define PROJECT2_CONTACTMANAGER_H


#include "extPersonType.h"

class PersonList {
private:
    extPersonType *first;
    extPersonType *last;
    extPersonType *halfwayIndex;
    int contactSize;

public:
    const PersonList & operator=(const PersonList &);
    //Overload the assignment operator

    void initializeList();
    //Initialize list in empty state
    //PostCondition: first = nullptr, last = nullptr

    bool isEmpty();
    //Function to determine if list is empty
    //PostCondition: Return true if empty, else false

    void print() const;
    //Function to output the date in each node.
    //PostCondition: none

    int length();
    //Function to return the number of nodes in the list
    //PostCondition: Return value of contactSize

    void destroyList();
    //Function to delete all nodes from the list
    //PostCondition: first=nullptr, lat = nullptr, count=0

    extPersonType front() const;
    //Function to return the first element of the list
    //Precondition: The list must exist and not be empty
    //PostCondtioin: If the list is empty, throws EmptyListError
    //                else first element of list is returned

    extPersonType back() const;
    //Function to return the last element of the list
    //Precondition: The list must exist and not be empty
    //PostCondtioin: If the list is empty, throws EmptyListError
    //                else last element of list is returned

    void insertFirst(extPersonType * newPerson);
    //Function to insert newPerson at the beginning of the list
    //PostCondition: first points to the new list with newPerson inserted
    //at the beginning. Last points to the last item in the list.

    void insertLast(extPersonType * newPerson);
    //Function to insert newPerson at end of list
    //PostCondition: First points to smae Person, lastPerson
    //now points to newPerson and last points to newPerson

    PersonList();
    //default constructor
    //initialize list in empty state
    //PostCondition: first=nullptr, last=nullptr, count=0

    PersonList(const PersonList & otherManager);
    //copy constructor

    ~PersonList();
    //destructor
    //deletes all nodes from list
    //PostCondition: the object is detroyed
};



#endif //PROJECT2_CONTACTMANAGER_H
