//
// Created by Brennan Crispin on 11/23/15.
//

#ifndef PROJECT2_BINARYSEARCH_H
#define PROJECT2_BINARYSEARCH_H


#include <array>

template <class T>
class searchAndSort
{
public:
    static int binarySearch(T* searchArr, int length, T searchObject);
    static void quickSort(T *sortArr, int left, int right);

};


#endif //PROJECT2_BINARYSEARCH_H
