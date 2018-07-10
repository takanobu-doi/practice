#ifndef _MYERROR_HPP_
#define _MYERROR_HPP_

class MyError
{
public:
  MyError(int error_type):m_errortype(error_type){}
  int getErrorType(){return m_errortype;}
  enum ErrorCode{INVALID_ARGUMENT,ARGUMENT_MISSING};
protected:
  in m_errortype;
};

#endif
