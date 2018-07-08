#include "MyHistogram.hpp"

MyHistogram::MyHistogram(int nbins)
{
  m_bincount = nbins;
  m_store = new double[nbins];
}

MyHistogram::~MyHistogram()
{
  delete [] m_store;
}

void MyHistogram::clear()
{
  double *p = m_store;
  for(int i=0;i<m_bincount;i++){
    *p++ = 0.;
  }
  return;
}

void MyHistogram::fill(double fvalue)
{
  int bin = int(fvalue);
  if(bin>=0 && bin < m_bincount){
    m_store[bin] += 1.;
  }
  return;
}

void MyHistogram::dump(std::ostream &os)
{
  for(int i=0;i<m_bincount;i++){
    if(i%10 == 0){
      os.width(4);
      os << i << ":";
    }
    os.width(6);
    os << m_store[i];
    if(i%10 == 9){
      os << std::endl;
    }else{
      os << " ";
    }
  }
  os << std::endl;
  return;
}
