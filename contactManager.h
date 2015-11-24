//
// Created by Brennan Crispin on 11/21/15.
//

#ifndef PROJECT2_CONTACTMANAGER_H
#define PROJECT2_CONTACTMANAGER_H

#include "extPersonType.h"
#include "extPersonList.h"


class contactManager
{
private:
    extPersonList contactList;
public:
    extPersonType findPerson();
    extPersonList sortListByDate();
    extPersonList sortListByAddress();
    extPersonList sortListByPhone();
    extPersonList sortListByName();

};


#endif //PROJECT2_CONTACTMANAGER_H
