#include "BaseConverter.h"

BaseConverter::BaseConverter() : _baseType(2), _data(0) {}

BaseConverter::BaseConverter(int base) : _baseType (base), _data(0) {_cStack = "";}
	
BaseConverter::~BaseConverter() {}	

char BaseConverter::mapChar (int num) {} 
//This is to implement Strategy Pattern  
//So that the character mapping algorithm in final result is performed run-time
//depending on the implementation done in concrete (child) Converter classes
//For any change in mapping, only the mapChar() method in concrete Converter classes to be changed 

void BaseConverter::setData(int data)
{
    _data = data;
}

void BaseConverter::Convert () {
    Convert (_data) ;
    reverse(_cStack.begin(), _cStack.end()) ;
    cout<<"\nusing Base "<<_baseType<<", input "<<_data<<" converted into: "<< _cStack<<endl;
    cout<<endl ;
}
	
void BaseConverter::Convert (int data) 
{
   std::stringstream ss;

   if (data >= _baseType) 
   { 
	int d = data % _baseType;
	ss << mapChar(d) ;	//Strategy Pattern
	_cStack += ss.str() ;
	data = data / _baseType ;
	Convert(data) ;
   }
   else
   {
       ss << mapChar(data);	//Strategy Pattern
       _cStack += ss.str() ; 
   }

}    

