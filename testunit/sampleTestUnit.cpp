#include "ctestplus.h"
#include <QtTest/QtTest>
#include <QtCore/QCoreApplication>

class TestCTestPlus: public QObject
{
        Q_OBJECT
private slots:
        void testMinus_data();

        void testPlus();
        void testMinus();
};

void TestCTestPlus::testPlus()
{
        CTestPlus sobj;
        QBENCHMARK {
                sobj.value(3);
                sobj.plus(4);
        }
        QCOMPARE(sobj.value(), int(7));
}

void TestCTestPlus::testMinus_data()
{
        QTest::addColumn<int>("value");
        QTest::addColumn<int>("minus");
        QTest::addColumn<int>("result");

        QTest::newRow("3-4")   << 3   << 4   << -1;
        QTest::newRow("-1+5")  << -1  << -5  << 4;
        QTest::newRow("-1+4")  << -1  << -4  << 5;	//	error
        QTest::newRow("-1+4")  << -1  << -4  << 5;
        QTest::newRow("4-3")   << 4   << 3   << 1;
}

void TestCTestPlus::testMinus()
{
        QFETCH(int, value);
        QFETCH(int, minus);
        QFETCH(int, result);

        CTestPlus sobj;
        sobj.value(value);

        QCOMPARE(sobj.minus(minus), result);
}

#include "sampleTestUnit.moc"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    TestCTestPlus test;
    return QTest::qExec(&test, argc, argv);
}
