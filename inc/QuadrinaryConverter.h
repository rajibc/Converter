#ifndef _QUADRINARYCONVERTER_
#define _QUADRINARYCONVERTER_

#include "BaseConverter.h"

class QuadrinaryConverter : public BaseConverter {
  public:
      QuadrinaryConverter() ;
      ~QuadrinaryConverter() ;

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
      char mapChar (int num) ; 
};
#endif
