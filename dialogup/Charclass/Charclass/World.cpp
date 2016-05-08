#include "World.h"
#include "Character.h"

World::World() : Zones(), Characters() {
	Zones.push_back(new Zone(ZoneId::r1Z1));
	Zones.push_back(new Zone(ZoneId::r1Z2));
	Zones.push_back(new Zone(ZoneId::r1Z3));
	Zones.push_back(new Zone(ZoneId::r1Z4));
	Zones.push_back(new Zone(ZoneId::r2Z1));
	Zones.push_back(new Zone(ZoneId::r2Z2));
	Zones.push_back(new Zone(ZoneId::r2Z3));
	Zones.push_back(new Zone(ZoneId::r2Z4));
	Zones.push_back(new Zone(ZoneId::r3Z1));
	Zones.push_back(new Zone(ZoneId::r3Z2));
	Zones.push_back(new Zone(ZoneId::r3Z3));
	Zones.push_back(new Zone(ZoneId::r3Z4));
	Zones.push_back(new Zone(ZoneId::r4Z1));
	Zones.push_back(new Zone(ZoneId::r4Z2));
	Zones.push_back(new Zone(ZoneId::r4Z3));
	Zones.push_back(new Zone(ZoneId::r4Z4));
}

void World::Tick() {
	for (auto zone : Zones)
	{
		zone->Tick();
	};
	for (auto C : Characters)
	{
		C->Tick();
	};
}

void World::addCharacter(Character* X)
{
	Characters.push_back(X);
}









