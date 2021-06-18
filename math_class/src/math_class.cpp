#include "math_class.h"
#include <cstdio>
#include <iostream>

// Date constructor
MathClass::MathClass()
{
    // SetDate(year, month, day);
}
 
// Date member function
void MathClass::SetDate(int year, int month, int day)
{
    m_month = month;
    m_day = day;
    m_year = year;
}

float MathClass::getSum(float valueA, float valueB){
    // m_valueA = valueA;
    // m_valueB = valueB;
    // float sum = m_valueA + m_valueB;
    float sum = valueA + valueB;
    std::cout << valueA << "+" << valueB << "=" << sum << std::endl;
    return sum;
}