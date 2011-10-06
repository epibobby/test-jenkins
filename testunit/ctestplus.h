#ifndef CTESTPLUS_H
#define CTESTPLUS_H
#include <QtTest/QtTest>

class CTestPlus
{
public :
        CTestPlus();
        virtual ~CTestPlus();

        //	calc method
        int plus(int val);
        int minus(int val);

        //	value method
        int value() const;
        void value(int val);

private :
        int m_value[3];
};

#endif // CTESTPLUS_H
