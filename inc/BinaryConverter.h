#ifndef _BINARYCONVERTER_
#define _BINARYCONVERTER_

#include "BaseConverter.h"

class BinaryConverter : public BaseConverter {
  public:
      BinaryConverter() ;
      ~BinaryConverter() ;

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
      char mapChar (int num) ; 
};
#endif
