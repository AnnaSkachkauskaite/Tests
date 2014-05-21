#pragma once
#include "comparator.h"
#include <iostream>
using namespace std;

class BubbleSorter
{
public:
    BubbleSorter(){}
    template <typename T>
    void sort(T arr[], int size, Comparator<T> *comparator);
};




template <typename T>
void BubbleSorter::sort(T arr[], int size, Comparator<T> *comparator)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (comparator->compare(arr[j], arr[j + 1]))
            {
                swap(arr[j], arr[j + 1]);

            }
        }
    }
}


