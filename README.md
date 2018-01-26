# Converter
Converter App to demonstrate Factory, Strategy Patterns 

Application:	ConverterAPP
Purpose:	To convert a decimal number into any choice of base for e:g: base 2, 3, 4, 5, 6, 7
*		Currently supports base 2 & 3 
*		Where the character appears in result is customized for e:g: 
		Base 3 would display the result by mapping 0 -> '0', 1-> '-' , 2 -> '+' 
*		Main conversion algorithm uses RECURSION principle 
*	Uses FACTORY PATTERN so that base type support can be expanded w/o impact to Client code 
*	Uses STRATEGY PATTERN so that mapping algorithm of characters appearing in final result can be decided run-time

Version:	1.0
To Build:	Un-tar the archive to copy source code files in a folder. Execute 
‘make all’ (assuming GNU C++ compiler presence)

To Execute:	Run ConverterAPP binary (currently executed on Linux)



Sample Execution:
1.	
./ConverterAPP
Base 2 Representation: 0 -> 0, 1 -> 1
Base 3 Representation: 0 -> 0, 1 -> - , 2 -> +
What is your base (2,3,4,5,6,7): 3
Enter the number in Decimal: 16
using Base 3, input 16 converted into: -+-

2.	
./ConverterAPP
Base 2 Representation: 0 -> 0, 1 -> 1
Base 3 Representation: 0 -> 0, 1 -> - , 2 -> +
What is your base (2,3,4,5,6,7): 3
Enter the number in Decimal: 21
using Base 3, input 21 converted into: +-0

3.	
./ConverterAPP
Base 2 Representation: 0 -> 0, 1 -> 1
Base 3 Representation: 0 -> 0, 1 -> - , 2 -> +
What is your base (2,3,4,5,6,7): 2
Enter the number in Decimal: 16
using Base 2, input 16 converted into: 10000

