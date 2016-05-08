#pragma once
#include <list>


class Character;

enum class ZoneId {
	r1Z1 = 1,              //1 регион 1 зона
	r1Z2,              //1 регион 2 зона
	r1Z3,              //1 регион 3 зона
	r1Z4,              //1 регион 4 зона
	r2Z1,              //2 регион 1 зона
	r2Z2,              //2 регион 2 зона
	r2Z3,              //2 регион 3 зона
	r2Z4,              //2 регион 4 зона
	r3Z1,              //3 регион 1 зона
	r3Z2,              //3 регион 2 зона
	r3Z3,              //3 регион 3 зона
	r3Z4,              //3 регион 4 зона
	r4Z1,              //4 регион 1 зона
	r4Z2,			   //4 регион 2 зона
	r4Z3,			   //4 регион 3 зона
	r4Z4 			   //4 регион 4 зона
};
class Zone
{
private:
	ZoneId ID ;
public:
	Zone(ZoneId id) {
		ID = id;
	}
	void Tick()
	{
		printf("Zone %u\n",ID);
	};
};




class World {
	std::list<Zone*> Zones;
	std::list<Character*> Characters;
public:


	World();
	void addCharacter(Character* X);
	void Tick();
};















