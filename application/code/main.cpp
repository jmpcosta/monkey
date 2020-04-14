// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Monkey main C++ function
//			Read the README.md file for more information on the project
//
// *****************************************************************************************


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Include Standard headers
#include <iostream>
#include <exception>
#include <memory>

// Import module declarations
#include "monkey_defs.hh"

// *****************************************************************************************
//
// Section: Function definition
//
// *****************************************************************************************

int MONKEY_MAIN( int argc, t_char * argv[] )
{
 try
 {
	 std::unique_ptr<PROJECT> proj ( new PROJECT );

	 proj.get()->import( argc, argv );

	 proj.get()->execute();

 }
 catch( const std::exception & e )
 { std::cerr << "Caught exception: " << e.what() << std::endl; }

 return EXIT_SUCCESS;
}
