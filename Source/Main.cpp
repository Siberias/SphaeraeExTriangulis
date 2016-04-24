#include "Precompiled.h"

//TODO: Move out to somewhere accessible
#if defined(PLATFORM_WINDOWS)
#include <Analysis/WindowsLogger.h>
#else
#include <Analysis/BaseLogger.h>
#endif

#include <Analysis/LogType.h> //TODO: Move to where initialisation happens

int main(int argc, char* argv)
{
	//TODO: Make a game loop

	//TODO: Move initialisation to an Initialisation function
	CryoStar::LogTypeSerialisation::InitialiseSerialisation();

#if defined(PLATFORM_WINDOWS)
	CryoStar::WindowsLogger logger;
#else
	CryoStar::BaseLogger logger;
#endif

	logger.LogDebug("Main", "Hello down there!");

	return 0;
}