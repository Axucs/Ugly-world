#pragma once
#include <list>


class Character;

enum class ZoneId {
	r1Z1 = 1,              //1 ������ 1 ����
	r1Z2,              //1 ������ 2 ����
	r1Z3,              //1 ������ 3 ����
	r1Z4,              //1 ������ 4 ����
	r2Z1,              //2 ������ 1 ����
	r2Z2,              //2 ������ 2 ����
	r2Z3,              //2 ������ 3 ����
	r2Z4,              //2 ������ 4 ����
	r3Z1,              //3 ������ 1 ����
	r3Z2,              //3 ������ 2 ����
	r3Z3,              //3 ������ 3 ����
	r3Z4,              //3 ������ 4 ����
	r4Z1,              //4 ������ 1 ����
	r4Z2,			   //4 ������ 2 ����
	r4Z3,			   //4 ������ 3 ����
	r4Z4 			   //4 ������ 4 ����
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















