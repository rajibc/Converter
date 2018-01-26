#ifndef _BASECONVERTER_
#define _BASECONVERTER_

#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

class BaseConverter {
protected: 
	int _baseType ;
	int _data;
	string _cStack ;
public:
        BaseConverter() ;
	BaseConverter(int base);  
	virtual ~BaseConverter() ;

	virtual char mapChar (int num) ;
	//This is to implement Strategy Pattern  
	//So that the character mapping algorithm in final result is performed run-time
	//depending on the implementation done in concrete (child) Converter classes
	//For any change in mapping, only the mapChar() method in concrete Converter classes to be changed 

	void setData(int data) ;

	void Convert () ;
	void Convert (int data) ; 
};
#endif
