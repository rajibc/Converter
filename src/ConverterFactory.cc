#include "ConverterFactory.h"

//ConverterFactory class is to implement Factory Pattern
//Whenever a new concrete Converter Class is added
//Add the new concrete Converter class instance to map _converters with correct key
//By adding to the Constructor ConverterFactory()
ConverterFactory::ConverterFactory() {
    _converters[2] = new BinaryConverter() ;
    _converters[3] = new TrinaryConverter() ;
    _converters[4] = new QuadrinaryConverter() ;
}

ConverterFactory::~ConverterFactory(){ 
    _converters.clear() ;
}

BaseConverter* ConverterFactory::create(int type) {
    BaseConverter* bcptr = _converters.at(type) ;
    return  bcptr ;
}
