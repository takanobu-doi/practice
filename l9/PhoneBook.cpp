#include "PhoneBook.hpp"

std::ostream &operator << (std::ostream &os,PhoneBook &pb)
{
  os << pb.getName() << ": " << pb.getNumber();
  return os;
}
