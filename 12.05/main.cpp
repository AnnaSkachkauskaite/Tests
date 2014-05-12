#include "complexnumbertest.h"
#include "pairtest.h"

int main()
{
    PairTest pairTest;
    QTest::qExec(&pairTest);
    ComplexNumberTest numTest;
    QTest::qExec(&numTest);
}
