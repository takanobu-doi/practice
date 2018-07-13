#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_

#include <string>
#include <iostream>

class PhoneBook
{
public:
  PhoneBook(const char *pname,int number):m_name(pname),m_number(number)
  {
  };
  std::string &getName(){return m_name;}
  int getNumber(){return m_number;}
protected:
  std::string m_name;
  int m_number;
};

std::ostream &operator << (std::ostream &os,PhoneBook &pb);

#endif
