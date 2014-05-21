#pragma once

#include <QObject>
#include <QtTest/QtTest>
#include "intcomparator.h"
#include "comparator.h"
#include "bubblesorter.h"

#include <QObject>

class IntBubbleSorterTest : public QObject
{
    Q_OBJECT
public:
    explicit IntBubbleSorterTest(QObject *parent = 0);

private slots:
    void sortTest()
    {
        Comparator<int> *comparator;
        int arr[5] = {6 , 5, 2, 1, 7};
        sorter.sort<int>(arr, 5, comparator);
        QVERIFY(isSorted(arr, 5));
    }

private:
    BubbleSorter sorter;
    bool isSorted(int arr[], int size)
        {
            for (int i = 0; i < size - 1; i++)
            {
                if(arr[i] > arr[i + 1])
                    return false;
            }
            return true;
        }

};

