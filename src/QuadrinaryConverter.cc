#include "QuadrinaryConverter.h"

QuadrinaryConverter::QuadrinaryConverter () : BaseConverter(4) 
{
	cout <<"\nBase 4 Representation: 0 -> 0, 1 -> x , 2 -> y , 3 -> z";  
}

QuadrinaryConverter::~QuadrinaryConverter() {}

//This is to implement Strategy Pattern  
//For any change in mapping, only the mapChar() method to be changed 
char QuadrinaryConverter::mapChar (int num) {
     switch (num) 
     {
	    case 0: 
			return '0' ;
			break ;
	    case 1: 
			return 'x' ;
			break ;
	    case 2:
			return 'y' ;
			break ;
	    case 3:
	    default:
			return 'z' ;
			break ;
    }
}   

