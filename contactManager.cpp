//
// Created by Brennan Crispin on 11/21/15.
//

#include "contactManager.h"

extPersonType contactManager::findPerson() {
 return extPersonType(addressType(), dateType(), phoneNumberType(), BUSINESS);
}

extPersonList contactManager::sortListByDate() {
    return extPersonList();
}

extPersonList contactManager::sortListByAddress() {
 return extPersonList();
}

extPersonList contactManager::sortListByPhone() {
 return extPersonList();
}

extPersonList contactManager::sortListByName() {
 return extPersonList();
}
