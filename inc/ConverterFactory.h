#ifndef _CONVERTERFACTORY_
#define _CONVERTERFACTORY_

#include <iostream>
#include <map>
#include "BinaryConverter.h"
#include "TrinaryConverter.h"
#include "QuadrinaryConverter.h"
using namespace std;


//ConverterFactory class is to implement Factory Pattern
//Whenever a new concrete Converter Class is added
//Add the new concrete Converter class instance to map _converters with correct key
//By adding to the Constructor ConverterFactory()
class ConverterFactory {
	map<int,BaseConverter*> _converters ;

    public:
	ConverterFactory() ; 

	~ConverterFactory(); 

	BaseConverter* create(int type); 
};
#endif
