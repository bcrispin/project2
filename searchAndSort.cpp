//
// Created by Brennan Crispin on 11/23/15.
//

#include "searchAndSort.h"

template <class T>
int searchAndSort::binarySearch(T *searchArr, int length, T searchObject) {
    int first = 0;
    int last = length - 1;
    int mid;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (searchArr[mid] == searchObject)
            return mid;
        else if (searchObject < searchArr[mid])
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1;

}

template <class T>
void searchAndSort::quickSort(T *sortArr, int left, int right) {
    int i = left, j = right;
    T temp;
    T pivot = sortArr[(left + right) / 2];

    while (i <= j) {
        while (sortArr[i] < pivot)
            i++;
        while (sortArr[j] > pivot)
            j--;
        if (i <= j) {
            temp = sortArr[i];
            sortArr[i] = sortArr[j];
            sortArr[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(sortArr, left, j);
    if (i < right)
        quickSort(sortArr, i, right);
}
