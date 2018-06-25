// Include important c++ libraries here
#include "stdafx.h"
#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	// Create a video mode object
	VideoMode vm(1920, 1080);

	// Create and open a window to render
	RenderWindow window(vm, "Timber!!!", Style::Fullscreen);

	return 0;
}