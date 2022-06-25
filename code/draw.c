//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "draw.h"

extern App app;

//
// Should prepare are scene for the player.
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