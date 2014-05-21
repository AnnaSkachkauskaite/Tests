#include <QObject>
#include <QtTest/QtTest>
#include "stringcomparator.h"

class StringComparatorTest : public QObject
{
    Q_OBJECT
public:
    explicit StringComparatorTest(QObject *parent = 0);

private slots:
    void Test1()
    {
        QVERIFY(comparator.compare("asd", "rta"));
    }

    void Test2()
    {
        QVERIFY(!comparator.compare("er", "ab"));
    }

private:
    StringComparator comparator;


};

