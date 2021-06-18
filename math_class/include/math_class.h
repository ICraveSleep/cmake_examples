
#ifndef MATHCLASS_H
#define MATHCLASS_H
 
class MathClass
{
private:
    int m_year;
    int m_month;
    int m_day;
    float m_valueA;
    float m_valueB;
 
public:
    MathClass();
    float getSum(float valueA, float ValueB);

    void SetDate(int year, int month, int day);
    
    int getYear() { return m_year; }
    int getMonth() { return m_month; }
    int getDay()  { return m_day; }
};
 
#endif