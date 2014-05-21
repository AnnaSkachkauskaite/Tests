#pragma once

#include <QObject>
#include <QtTest/QtTest>
#include "intcomparator.h"
#include "comparator.h"

class IntComparatorTest : public QObject
{
    Q_OBJECT
public:
    explicit IntComparatorTest(QObject *parent = 0);

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
    IntComparator comparator;

};

