//
// Created by Brennan Crispin on 11/15/15.
//

#ifndef PROJECT2_ADDRESSTYPE_H
#define PROJECT2_ADDRESSTYPE_H

#include<string>

class addressType
{
private:
    std::string streetName;
    int streetNumber;
    std::string city;
    std::string state;
    int zip;

public:

    bool operator>(const addressType&);
    bool operator>=(const addressType&);
    bool operator<=(const addressType&);
    bool operator<(const addressType&);
    bool operator==(const addressType&);


    void print();
    //Function to output the address of the user.

    void setAddress(int, std::string, std::string, std::string, int);
    //Function to set the address
    ////The member variables streetName, streetNumber, city, state, and zip are set
    //according to the parameters.
    //Postcondition: dMonth = month; dDay = day; dYear = year

    const std::string getStreetName() const;
    const int getStreetNumber() const;
    const std::string getCity() const;
    const std::string getState() const;
    const int getZip() const;


    addressType(int = 0, std::string = "", std::string = "", std::string = "", int = 0);
};


#endif //PROJECT2_ADDRESSTYPE_H
