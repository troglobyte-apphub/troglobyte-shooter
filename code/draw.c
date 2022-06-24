//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "draw.h"

extern App app;

//
// We set the colour of SDL renderer using
// SDL_SetRenderDrawColor. This function
// takes five parameters: the pointer to the
// renderer that we created in init.c and the
// RGBA of the colour that we want to use.
// These values go from 0 to 255, with 0 being
// darkest and 255 being full. The final parameter
// is the alpha value. 0 is fully transparent
// whereas 255 is opaque. SDL_RenderPresent  takes
// just one parameter - once again the renderer
// that we are using.
//
// function arguments:
// -> n/a: ???
//
void prepareScene(void)
{
	SDL_SetRenderDrawColor(app.renderer, 96, 128, 255, 255);
	SDL_RenderClear(app.renderer);
} // end of func

//
// Should present, and displaying are scene on the
// screen.
//
// function arguments:
// -> n/a: ???
//
void presentScene(void)
{
	SDL_RenderPresent(app.renderer);
} // end of func