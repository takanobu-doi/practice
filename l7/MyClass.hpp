#ifndef _MYCLASS_HPP_
#define _MYCLASS_HPP_

#include <iostream>

class MyClass
{
public:
  MyClass(int i);
  MyClass();
  MyClass& operator = (MyClass &rht);
  bool operator < (MyClass &rht);

  MyClass& operator = (int pvalue){m_value = pvalue;}
  void set(int pvalue){m_value = pvalue;}
  int get(){return m_value;}

private:
  int m_value;
};

#endif
