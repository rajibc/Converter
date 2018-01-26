#include "BinaryConverter.h"

BinaryConverter::BinaryConverter() : BaseConverter(2) 
{
	cout <<"\nBase 2 Representation: 0 -> 0, 1 -> 1";  
}

BinaryConverter::~BinaryConverter() {}

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
char BinaryConverter::mapChar (int num) 
{
      	return (num + '0') ;
}

