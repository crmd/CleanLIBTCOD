
#include "libtcod.hpp"

int main()
{
	TCODConsole::initRoot(128, 64, "Client", false);
	TCODSystem::setFps(25); // limit framerate to 25 frames per second
	TCODConsole::root->setDefaultForeground(TCODColor(255, 0, 0));
	TCODConsole::root->setDefaultBackground(TCODColor(0, 0, 0));
	
	while (!TCODConsole::isWindowClosed())
	{
		//TCODConsole::root->clear();
		//DrawStuff
		TCOD_key_t key = TCODConsole::checkForKeypress();	//If this isn't being done the program gets stuck
		TCODConsole::root->printFrame(1,1,126,62);
		TCODConsole::root->flush();
	}

	return 0;
}