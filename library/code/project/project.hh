// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Import of Monkey library interfaces
//
// *****************************************************************************************

#ifndef MONKEY_PROJECT_HH_
#define MONKEY_PROJECT_HH_


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import library definitions
#include "defs/trace.hh"
#include "target/target.hh"



// *****************************************************************************************
//
// Section: API declaration
//
// *****************************************************************************************


namespace monkey
{

class project
{
public:
		project();
		~project();

		void	import	( int argc, char * argv[] ) {}
		void	execute	( void ) {}

private:

		target		task;
};


}	// End of namespace "monkey"

#endif // MONKEY_PROJECT_HH_
