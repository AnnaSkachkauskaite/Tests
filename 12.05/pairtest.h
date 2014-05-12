#pragma once

#include <QObject>
#include <QtTest/QtTest>
#include "pair.h"

class PairTest : public QObject
{
    Q_OBJECT
public:
    explicit PairTest(QObject *parent = 0);

private slots:
    void emptyNumberTest()
    {
        Pair pair;
        QVERIFY(pair.first == 0);
        QVERIFY(pair.second == 0);
    }

    void createPairTest()
    {

        Pair pair(1, 2);
        QVERIFY(pair.first == 1);
        QVERIFY(pair.second == 2);
    }

    void sumPairsTest()
    {
        Pair pair1(2, 5);
        Pair pair2(7, 1);
        Pair result = pair1 + pair2;
        QVERIFY(result.first == 9);
        QVERIFY(result.second == 6);
    }

    void mulOnDoubleTest()
    {
        Pair pair(1, 2);
        pair = pair * 3;
        QVERIFY(pair.first == 3);
        QVERIFY(pair.second == 6);
    }

};
