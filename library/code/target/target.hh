// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Implementation of a Target type
//
// *****************************************************************************************

#ifndef MONKEY_TARGET_HH_
#define MONKEY_TARGET_HH_


// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ standard headers
#include <vector>

// Import library definitions
#include "defs/trace.hh"
#include "goal/goal.hh"



// *****************************************************************************************
//
// Section: API declaration
//
// *****************************************************************************************


namespace monkey
{

class target
{
public:
		target();
		~target();


private:

		std::vector<goal>		iGoals;


		TRACE_CLASSNAME_DECLARATION
};


}	// End of namespace "monkey"

#endif // MONKEY_TARGET_HH_
