//***************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
//***************************************************************************

#include <iostream>
#include <vector> 
#include <string>
#include <sstream>
#include "../include/Library.h"

//***************************************************************************
// Function:    main
//
// Description: Print hi!
//
// Parameters:  none
//
// Returned:    EXIT_SUCCESS
//***************************************************************************
int main()
{
	Library cLib;

	/* 
		the following code simulates the COMMAND FILE:
		
		T
		L TXT F test.txt TEST
		L TXT F test2.txt TEST2
		T
		L TXT F test.json TEST2
		L STOP test.txt
		T
		L STOP test.json
		T
		L STOP test2.json
		*/
	cLib.transformNewToOld();
	std::cout << "-----------\n";
	cLib.logStart("test.txt");
	cLib.logStart("test2.txt");
	cLib.transformNewToOld();
	cLib.logStart("test.json");
	std::cout << "-----------\n";
	cLib.logStop("test.txt");
	cLib.transformNewToOld();
	cLib.logStop("test.json");
	std::cout << "-----------\n";
	cLib.transformNewToOld();
	std::cout << "-----------\n";
	cLib.logStop("test2.txt");
	
  return EXIT_SUCCESS;
}
