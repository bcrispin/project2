//
// Created by Brennan Crispin on 11/15/15.
//

#include <iostream>
#include "dateType.h"

void dateType::setDate(int month, int day, int year) {
    dateType::dMonth = month;
    dateType::dDay = day;
    dateType::dYear = year;
}

int dateType::getDay() const {
    return dateType::dDay;
}

int dateType::getMonth() const {
    return dateType::dMonth;
}

int dateType::getYear() const {
    return dateType::dYear;
}

void dateType::printDate() const {
    std::cout << dateType::dDay << "/" << dateType::dMonth << "/" << dateType::dYear;
}

dateType::dateType(int month, int day, int year) {
    dateType::setDate(month ,day ,year);
}
