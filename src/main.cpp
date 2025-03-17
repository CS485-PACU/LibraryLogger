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
