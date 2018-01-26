/********************************************************************************************************
Application:	ConverterAPP
Purpose:	To convert a decimal number into any choice of base for e:g: base 2, 3, 4, 5, 6, 7
*		Currently supports base 2 & 3 
*		where the character appears in result is customized for e:g: 
		Base 3 would display the result by mapping 0 -> '0', 1-> '-' , 2 -> '+' 
*		Main conversion algorithm uses RECURSION principle 
*		Uses FACTORY PATTERN so that base type support can be expanded w/o impact to Client code 
*		Uses STRATEGY PATTERN so that mapping algorithm of characters appearing in final result
		can be decided run-time

Version:	2.0
To Build:	Untar the archive on a folder. Execute make all (assuming GNU C++ compiler presents)
To execute:	Run ConverterApp binary
********************************************************************************************************/
#include <iostream>
#include "BaseConverter.h"
#include "BinaryConverter.h"
#include "TrinaryConverter.h"
#include "ConverterFactory.h"

int main (int argc, char *argv[]) {
    int baseType, input ;
    BaseConverter *bPtr;
    ConverterFactory *cFactoryPtr = new ConverterFactory() ;

    //User Interface Block begins here
    cout <<endl ;
    cout <<"\nChoose your base (2,3,4,5,6,7): ";	
    cin>> baseType;
    if ((baseType < 2) && (baseType > 7))
    {
    	cout<<"Supports base 3 to base 7"<<endl;
	return 1;
    }

    cout<< "Enter the number in Decimal: ";
    cin>> input;
    //User Interface Block ends here

    try {
/*
	    switch (baseType) {
	    case (2) : 	
	    		bPtr = new BinaryConverter();
			break;
	    case (3) :
	    default:
	    		bPtr = new TrinaryConverter();
			break;
	}
*/    
	bPtr = cFactoryPtr->create(baseType);
	//Factory Pattern : This part of Client code is independent of
	//any new BaseConverter class addition in future. No change needed !!!!
	//
	
	bPtr->setData(input);
	bPtr->Convert() ;
	//Strategy Pattern is executed here. This Client code is unimpacted of
	//any change in character mapping algorithm in the final result 
	//  
    }
    catch (...) 
    {
	    cout<<"Exception occurred"<< endl;
    }	

    delete cFactoryPtr;
    return 0;
}
