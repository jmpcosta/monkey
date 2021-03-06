// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide tracing declarations/definitions
//
// *****************************************************************************************

#ifndef MONKEY_DEFS_TRACE_HH_
#define MONKEY_DEFS_TRACE_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers
#include <iostream>


// *****************************************************************************************
//
// Section: Supporting macros
//
// *****************************************************************************************

#ifdef OSAPI_TRACING
 #define TRACE_CLASSNAME_DECLARATION	static const char *	classname;
 #define TRACE_CLASSNAME(x)				const char * x::classname= #x ;
 #define TRACE_IF(x)					x;
 #define TRACE_ENTER					trace	( classname, "::", __FUNCTION__, " - Entering"			);
 #define TRACE_EXIT						trace	( classname, "::", __FUNCTION__, " - Leaving"			);
 #define TRACE_POINT					trace	( classname, "::", __FUNCTION__, " - Passing through"	);
 #define TRACE(...)						trace	( classname, "::", __FUNCTION__, " - ", __VA_ARGS__		);		// For instance methods
#else
 #define TRACE_CLASSNAME_DECLARATION
 #define TRACE_CLASSNAME(x)
 #define TRACE_IF(x)
 #define TRACE_ENTER
 #define TRACE_EXIT
 #define TRACE_POINT
 #define TRACE(...)
#endif


// *****************************************************************************************
//
// Section: Trace API declaration/definition
//
// *****************************************************************************************

namespace monkey
{


#ifdef MONKEY_TRACING

// Trace template composed of the next two entries
template <typename V>
void trace( const V & value  )
{
 std::cerr << value;
 std::cerr << std::endl;
}

template <typename V, typename... R>
void trace( const V & value, const R & ... rest  )
{
 std::cerr << value;

 trace( rest... );
}


#endif	// OSAPI_TRACING



}	// End of namespace "monkey"




#endif // MONKEY_DEFS_TRACE_HH_
