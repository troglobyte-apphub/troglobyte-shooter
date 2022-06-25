//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "input.h"


//
// This function simply reads all the recent inputs
// (keyboard, mouse, etc) from SDL's queue until
// there are none left. We'll only handle one right
// now - qutting. This event is sent when we close
// the SDL window by clicking on its close gadget.
//
// function arguments:
// -> n/a: ???
//
void doInput(void)
{
	SDL_Event event;

	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			case SDL_QUIT:
				exit(0);
				break;

			default:
				break;
		} // end switch

	} // end while

} // end of func
