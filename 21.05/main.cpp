#include "intcomparatortest.h"
#include "charcomparatortest.h"
#include "stringcomparatortest.h"
#include "intbubblesortertest.h"
int main()
{
    IntComparatorTest intTest;
    QTest::qExec(&intTest);
    CharComparatorTest charTest;
    QTest::qExec(&charTest);
    StringComparatorTest strTest;
    QTest::qExec(&strTest);
    IntBubbleSorterTest bubbleTest;
    QTest::qExec(&bubbleTest);
}
