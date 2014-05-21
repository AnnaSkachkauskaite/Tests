#pragma once

#include <QObject>
#include <QtTest/QtTest>
#include "charcomparator.h"
class CharComparatorTest : public QObject
{
    Q_OBJECT
public:
    explicit CharComparatorTest(QObject *parent = 0);

private slots:
    void Test1()
    {
        QVERIFY(comparator.compare(1, 2));
    }

    void Test2()
    {
        QVERIFY(!comparator.compare(5, 2));
    }

private:
    CharComparator comparator;

};

