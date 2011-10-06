#include "ctestplus.h"

CTestPlus::CTestPlus()
{
        for(int ni=0;ni<3;ni++)
                m_value[ni]=0;
}

CTestPlus::~CTestPlus()
{
}

int CTestPlus::plus(int val)
{
        m_value[0]=m_value[2];
        m_value[1]=val;
        m_value[2]=m_value[0]+m_value[1];
        return value();
}

int CTestPlus::minus(int val)
{
        m_value[0]=m_value[2];
        m_value[1]=val;
        m_value[2]=m_value[0]-m_value[1];
        return value();
}

int CTestPlus::value() const
{
        return m_value[2];
}
void CTestPlus::value(int val)
{
        m_value[2]=val;
}
