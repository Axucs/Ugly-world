#include "Character.h"
#include "World.h"
#include <Windows.h>
#include "joinM.h"
static int lastid = 1;

void main()
{
	World world1;

	Character* id1= new Character("Axucs", Character::Race::Dwarf);
	world1.addCharacter(id1);
	id1->setAge(23);
	id1->setSex(Character::Sex::Male);
	id1->setSociability(43);
	id1->setThems(Character::Thems::Politics,	new Them(5));
	id1->setThems(Character::Thems::Fauna,		new Them(0));
	id1->setThems(Character::Thems::History,		new Them(0));
	id1->setThems(Character::Thems::Architecture,new Them(0));
	id1->setThems(Character::Thems::Handicraft,	new Them(0));
	id1->setThems(Character::Thems::Medicine,	new Them(0));
	id1->setThems(Character::Thems::Theology,	new Them(0));
	id1->setThems(Character::Thems::Weather,		new Them(0));
	id1->setThems(Character::Thems::Society,		new Them(0));
	id1->setThems(Character::Thems::Warfare,		new Them(0));
	id1->setThems(Character::Thems::Economy,		new Them(0));
	id1->setThems(Character::Thems::Flora,		new Them(0));
	id1->setThems(Character::Thems::Entertainmen,new Them(0));
	id1->setThems(Character::Thems::Culture,		new Them(0));
	id1->setThems(Character::Thems::Law,			new Them(0));
	id1->setThems(Character::Thems::Family,		new Them(0));
	id1->setThems(Character::Thems::Rumors,		new Them(0));
	id1->setThems(Character::Thems::News,		new Them(0));
	id1->setRSZone(world1, ZoneId::r1Z1, 0);
	id1->setRSZone(world1, ZoneId::r1Z2, 0);
	id1->setRSZone(world1, ZoneId::r1Z3, 0);
	id1->setRSZone(world1, ZoneId::r1Z4, 0);
	id1->setRSZone(world1, ZoneId::r2Z1, 0);
	id1->setRSZone(world1, ZoneId::r2Z2, 0);
	id1->setRSZone(world1, ZoneId::r2Z3, 0);
	id1->setRSZone(world1, ZoneId::r2Z4, 0);
	id1->setRSZone(world1, ZoneId::r3Z1, 0);
	id1->setRSZone(world1, ZoneId::r3Z2, 0);
	id1->setRSZone(world1, ZoneId::r3Z3, 0);
	id1->setRSZone(world1, ZoneId::r3Z4, 0);
	id1->setRSZone(world1, ZoneId::r4Z1, 0);
	id1->setRSZone(world1, ZoneId::r4Z2, 0);
	id1->setRSZone(world1, ZoneId::r4Z3, 0);
	id1->setRSZone(world1, ZoneId::r4Z4, 0);
	id1->setTraits(Character::Traits::Honest,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Deceptive,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Generous,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Greedy,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Lonely,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Sociable,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Gambler,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::cold_blooded,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Responsible,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Irresponsible,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Attentive,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Absentminded,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Careful,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::sloppy,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Delicate,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Rough,				new Trait(0, 3, None)); 
	id1->setTraits(Character::Traits::Conceited,			new Trait(0, 3, None)); 
	id1->setTraits(Character::Traits::Self_sufficient,	new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Rasper,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Flexible,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Farsighted,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Myopic,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Endurant,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Individualist,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Collectivist,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Cynical,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Sentimental,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Cunning,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Guileless,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Calm,				new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Dynamic,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Ambitious,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Frivolous,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Unpredictable,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Stable,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Unstable,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Proud,				new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Humble,			new Trait(0, 3, None));
	id1->setTraits(Character::Traits::Diplomatic,		new Trait(0, 3, None));
	id1->setTraits(Character::Traits::conflicting,		new Trait(0, 3, None));
	
	Dialog* dialog1 = new Dialog(lastid);
	//lastid = lastid + 1;
	//Dialog dialog2(lastid++);

	for (int n=0;;n++)
	{
		Sleep(1000);
		printf("Tick number %u\n", n);
		world1.Tick();

	
	}
				
}

