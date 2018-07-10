#include "MyClass.hpp"
#include <iostream>

MyClass::MyClass(int i){m_value = i;}
MyClass::MyClass(){m_value = 0;}
MyClass& MyClass::operator = (MyClass &rht)
{
  m_value = rht.m_value;
  return *this;
}
bool MyClass::operator < (MyClass &rht){return m_value < rht.m_value;}
