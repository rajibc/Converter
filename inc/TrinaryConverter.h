#ifndef _TRINARYCONVERTER_
#define _TRINARYCONVERTER_

#include "BaseConverter.h"

class TrinaryConverter : public BaseConverter {
  public:
      TrinaryConverter() ;
      ~TrinaryConverter() ;

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
      char mapChar (int num) ; 
};
#endif
