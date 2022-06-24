//
// Troglobyte AppHub:
// author: Michael Gene Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "init.h"

extern App app;

//
// We start by calling SDL_Init, passing over SDL_INIT_VIDEO to
// initialize SDL2's video subsystem. We next create our window
// using SDL_CreateWindow. SDL_WINDOWPOS_UNDEFINED tells SDL to
// let the OS position the window wherever it likes. Our width
// and height are defined by SCREEN_WIDTH and SCREEN_HEIGHT (found
// in defs.h). With this done, we next create the main renderer by
// calling SDL_CreateRenderer, supplying the window we just created
// and the render flags that we want to use (in this case
// SDL_RENDERER_ACCELERATED). The -1 tells SDL to use the first
// graphics acceleration device it finds. Unless you're trying to
// do something very specific, you'll want to pass -1 to this call.
// For both the creation of the window and renderer we'll check to
// see if they were successful and exit with an error message if not.
//
// function arguments:
// -> n/a: ???
//
void initSDL(void)
{
	int rendererFlags = SDL_RENDERER_ACCELERATED;
    int windowFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		printf("Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
	} // end if

	app.window = SDL_CreateWindow("Shooter 01", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, windowFlags);

	if (!app.window)
	{
		printf("Failed to open %d x %d window: %s\n", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_GetError());
		exit(1);
	} // end if

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

	app.renderer = SDL_CreateRenderer(app.window, -1, rendererFlags);

	if (!app.renderer)
	{
		printf("Failed to create renderer: %s\n", SDL_GetError());
		exit(1);
	} // end if

} // end of func


void cleanup(void)
{
    SDL_DestroyRenderer(app.renderer);
    SDL_DestroyWindow(app.window);
    SDL_Quit();
} // end of func
