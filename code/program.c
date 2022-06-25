//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "program.h"
#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "draw.h"
#include "input.h"

App app;

//
// Should greet the user into the program
//
// function arguments:
// -> n/a: ???
//
const char *greet(void)
{
    return "Hello, C Developer.";
} // end of func

//
// overview:
//  This is where all Troglobyte apps start there operation.
//
//  We can also give command-line arguments in C. CLI
//  arguments are given after the name of the program in
//  command-line shell of Operating Systems.
//
// function arguments:
// -> argc: stores the number of command-line arguments passed in.
// -> argv: array of character pointers listing all the arguments.
//
int foundation(int argc, char **argv)
{
    memset(&app, 0, sizeof(App));
	initSDL();
	atexit(cleanup);

	while (1)
	{
		prepareScene();
		doInput();
		presentScene();

		SDL_Delay(16);
	} // end while

	return 0;
} // end of func
