#ifndef _MYHISTOGRSM_HPP_
#define _MYHISTOGRAM_HPP_

#include <iostream>

class MyHistogram
{
public:
  MyHistogram(int nbins);
  ~MyHistogram();
  void clear();
  void fill(double fvalue);
  void dump(std::ostream& os);

private:
  int m_bincount;
  double *m_store;
};

#endif
