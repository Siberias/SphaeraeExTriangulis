#include "Precompiled.h"

#include "Experiment_EntityConstruction.h"

#include <Entity/Entity.h>

class TestEntity : public CryoStar::Entity
{
public:
	TestEntity() 
		: CryoStar::Entity()
		, m_extraData("")
	{

	}

	void SetExtraData(const std::string& extraData)
	{
		m_extraData = extraData;
	}

	const std::string& GetExtraData() const
	{
		return m_extraData;
	}

	std::string m_extraData;
};

void Experiment_EntityConstruction::Run()
{
	TestEntity entity1;
	entity1.SetExtraData("weeee");
	TestEntity entity2(entity1);
	entity2.SetExtraData("wooo!");
}