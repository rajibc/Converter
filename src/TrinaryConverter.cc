#include "TrinaryConverter.h"

TrinaryConverter::TrinaryConverter () : BaseConverter(3) 
{
	cout <<"\nBase 3 Representation: 0 -> 0, 1 -> - , 2 -> +";  
}

TrinaryConverter::~TrinaryConverter() {}

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
char TrinaryConverter::mapChar (int num) {
     switch (num) 
     {
	    case 0: 
			return '0' ;
			break ;
	    case 1: 
			return '-' ;
			break ;
	    case 2:
	    default:
			return '+' ;
			break ;
    }
}   

