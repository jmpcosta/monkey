// *****************************************************************************************
//
// File description:
//
// Author:	Joao Costa
// Purpose:	Provide the definitions of the Monkey project
//
// *****************************************************************************************

#ifndef MONKEY_DEFS_HH_
#define MONKEY_DEFS_HH_

// *****************************************************************************************
//
// Section: Import headers
//
// *****************************************************************************************

// Import C++ system headers

// Import Library headers
#include <mklib.hh>

// *****************************************************************************************
//
// Section: Type declaration/definition
//
// *****************************************************************************************

#if defined(OS_LINUX) || defined(__linux__) || defined(LINUX)

 #define OS_LINUX			1
 #define MONKEY_MAIN		main
 #define t_char				char


#elif defined(OS_WINDOWS) || defined(_WIN32) || defined(_WIN64)

 #define OS_WINDOWS		1
 #define MONKEY_MAIN	wmain
 #define t_char			wchar_t

#endif


using PROJECT = monkey::project;


#endif // MONKEY_DEFS_HH_
