#pragma once

#include <QObject>
#include <QtTest/QtTest>
#include "complexnumber.h"

class ComplexNumberTest : public QObject
{
    Q_OBJECT
public:
    explicit ComplexNumberTest(QObject *parent = 0);

private slots:
    void emptyNumberTest()
    {
        ComplexNumber number;
        QVERIFY(number.first == 0);
        QVERIFY(number.second == 0);
    }

    void createNumberTest()
    {

        ComplexNumber number(1, 2);
        QVERIFY(number.first == 1);
        QVERIFY(number.second == 2);
    }

    void sumNumbersTest()
    {
        ComplexNumber number1(1, 2);
        ComplexNumber number2(5, 3);
        ComplexNumber result = number1 + number2;
        QVERIFY(result.first == 6);
        QVERIFY(result.second == 5);
    }

    void mulNumbersTest()
    {
        ComplexNumber number1(1, 2);
        ComplexNumber number2(5, 3);
        ComplexNumber result = number1 * number2;
        QVERIFY(result.first == -1);
        QVERIFY(result.second == 13);
    }

    void mulOnDoubleTest()
    {
        ComplexNumber number(1, 2);
        number = number * 4;
        QVERIFY(number.first == 4);
        QVERIFY(number.second == 8);
    }

    void lengthTest()
    {
        ComplexNumber number(3, 4);
        QVERIFY(number.length() == 5);
    }

};

