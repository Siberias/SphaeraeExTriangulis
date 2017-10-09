#include "Precompiled.h"

#include <Analysis/GlobalLogger.h>

#include <Analysis/LogType.h> //TODO: Move to where initialisation happens

#include <Experiments/Experiment_EntityConstruction.h>

int main(int argc, char* argv)
{
	//TODO: Make a game loop

	//TODO: Move initialisation to an Initialisation function
	CryoStar::LogTypeSerialisation::InitialiseSerialisation();

	CryoStar::Logging::LogDebug("Main", "G'day Matey Potatey");

	//TODO: Clear out experiments
	Experiment_EntityConstruction experiment_entityConstruction;
	experiment_entityConstruction.Run();

	return 0;
}