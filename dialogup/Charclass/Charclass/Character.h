
#pragma once

#include <string>
#include <map>
#include <list>
#include "World.h"

enum EStatus {
	Entrenched,
	There,
	None
};
class Them
{
	
private:
	int RS;
public:
	Them(int rs)
	{RS = rs;}
	int RSChange(int Change) {
		int min = 0;
		int max = 5;
		//if (RS > min && RS < max) { RS = RS + Change ;}
		if (RS >= min && RS <= max) { RS = RS + Change; }
		if (RS > max) { RS = max; }
		if (RS < min) { RS = min; }

		}
	};
class Trait {

private:
	int Growth;
	int Influence;
	EStatus Status;
public:

	Trait(int G, int I, EStatus S) {
		Growth = G; Influence = I; Status = S;
	}
	int InfluenceChange(int Change) {
		int min = 0;
		int max = 5;
		switch (Status)
		{
		case Entrenched: min = 3; break;
		case There: break;
		case None: max = 2; break;
		}
		if (Influence >= min && Influence <= max){Influence = Influence + Change;}
		if (Influence > max) { Influence = max; }
		if (Influence < min) { Influence = min; }
	}

	int GrowthChange(int Change) {
		Growth = Growth + Change;
		if (Growth > 10) { InfluenceChange(+1), Growth = 0; }
		else if (Growth < 0) { InfluenceChange(-1), Growth = 10; }
	};
		};		
class Character
{
public:
	enum Race {
		Human,
		Orc,
		Elf,
		Dwarf
	};
	enum Sex {
		Male,
		Female,
		none
	};
	enum Sociability {
		adf1,  //Жаждет общения
		adf2,  //необходимо общение
		adf3,  //может общаться
		adf4,  //избегает общения
		adf5  //максимально избегает общения
	};
	enum Age {
		ag1,    //"Отрок"
		ag2,    //"Молодой"
		ag3,    //"Взрослый"
		ag4    //"Старик"
	};
	enum Neatness {
		test
	};
	enum Society_Class {
		SC1,      //"Сырьевые"
		SC2,      //"Ремеслиники"
		SC3,      //"Духовенство"
		SC4,      //"Торговцы"
		SC5,      //"Стража"
		SC6,      //"Аристократы"
		SC7,      //"Просвищение"
		SC8,      //"Сброд"
		SC9		  //"Скрытый"
	};
	enum class Main_task {
		mat1,    //свободен
		mat2,    //практически свободен
		mat3,    //практически занят
		mat4,    //средне занят
		mat5,    //сильно занят
		mat6     //Очень сильно занят
	};
	enum class Moment_task {
		mot1,   //свободен
		mot2,   //практически свободе
		mot3,   //практически занят
		mot4,   //средне занят
		mot5,   //сильно занят
		mot6    //Очень сильно занят
	};
	enum class Thems {
		Politics,		 //политика
		Fauna,			 //фауна
		History,		 //История
		Architecture,	 //Архитектура
		Handicraft,		 //кравт, производство чего лиобо
		Medicine,		 //Медецына
		Theology,		 //Тиалогия
		Weather,		 //климат, погода
		Society,		 //Общество 
		Warfare,		 //Война
		Economy,		 //Экономика
		Flora,			 //Флора
		Entertainmen,	 //Развлечение
		Culture,		 //Культура
		Law,			 //Законы, порядки
		Family,			 //Семя 
		Rumors,			 //слухи 
		News			 //Новости
	};
	enum class Traits {
		Honest 		   ,//Честный
		Deceptive 	   ,//Лживый
		Generous 	   ,//Щедрый
		Greedy 		   ,//Жадный
		Lonely 		   ,//Одинокий
		Sociable	   ,//Общительный
		Gambler 	   ,//Азартный
		cold_blooded   ,//Хладнокровный
		Responsible    ,//Ответственный
		Irresponsible  ,//Безответственный
		Attentive 	   ,//Внимательный
		Absentminded   ,//рассеянный
		Careful 	   ,//Аккуратный
		sloppy 		   ,//Неряшливый
		Delicate 	   ,//Деликатный
		Rough 		   ,//Грубый
		Conceited 	   ,//Тщеславный
		Self_sufficient,//Самодостаточный
		Rasper 		   ,//Резкий
		Flexible 	   ,//Гибкий
		Farsighted 	   ,//Дальновидный
		Myopic 		   ,//Близорукий
		Endurant 	   ,//Терпеливый
		Individualist  ,//Индивидуалист
		Collectivist   ,//Коллективист
		Cynical 	   ,//Циничный
		Sentimental    ,//Сентиментальный
		Cunning 	   ,//Хитрый
		Guileless 	   ,//Простодушный
		Calm 		   ,//Спокойный
		Dynamic 	   ,//Динамичный
		Ambitious 	   ,//Целеустремленный
		Frivolous 	   ,//Легкомысленный
		Unpredictable  ,//Непредсказуемый
		Stable 		   ,//Стабильный
		Unstable 	   ,//Непостоянный
		Proud 		   ,//Гордый
		Humble 		   ,//Смиренный
		Demanding 	   ,//Требовательный
		Witty 		   ,//Остроумный
		Melancholy 	   ,//Меланхоличный
		dedicated 	   ,//Преданный
		Independent    ,//Независимый
		Opinionated    ,//Упрямый
		Diplomatic 	   ,//Дипломатичный
		conflicting    	//Конфликтный
	};
private:
	std::string NAME;
	Race RACE;
	Age AGE;
	Sex SEX;
	Sociability SOCIABILITY;
	Neatness NEATNESS;
	Society_Class SOCIETY_CLASS;
	Main_task MAIN_TASK;
	Moment_task MOMENT_TASK;
	std::map<Thems, Them*> THEMS;
	std::map<ZoneId, int> RSs;
	std::map<Traits, Trait*> TRAITS;

public:
	Character(const char* Name,Race X) 
		: THEMS(),RSs(),TRAITS()
	{
		NAME = Name;
		RACE = X;
		AGE = ag1;
		SEX = none;
		SOCIABILITY = adf1;
		NEATNESS = test;
		SOCIETY_CLASS = SC8;
		MAIN_TASK = Main_task::mat6;
		MOMENT_TASK = Moment_task::mot6;
	}
	~Character() {}
	void setAge(int X) {
		if (X <= 14) AGE = ag1;
		else if (X <= 25) AGE = ag2;
		else if (X <= 45) AGE = ag3;
		else AGE = ag4;
	}
	void setSex(Sex X) {
		SEX = X;
	}
	void setSociability(int X) {
		if (X >= 90)      SOCIABILITY = adf1; 
		else if (X >= 75) SOCIABILITY = adf2; 
		else if (X >= 50) SOCIABILITY = adf3; 
		else if (X > 25)  SOCIABILITY = adf4; 
		else if (X <= 25) SOCIABILITY = adf5;
	}
	void setNeatness(int X) {
		NEATNESS = test;
	}
	void setSociety_class(Society_Class X) {
		SOCIETY_CLASS = X;
	}
	void setMain_task(Main_task X) {
		     MAIN_TASK = X;
	}
	void setMoment_task(Moment_task X) {
			MOMENT_TASK = X;

	}
	void setRSZone(World& world, ZoneId id, int RS) {
		RSs.insert(std::make_pair(id, RS));
	}
	//faction
	//Status
	//EEE
	void setThems(Thems N, Them* X) {
		THEMS.insert(std::make_pair(N, X));
	}
	void setTraits(Traits N, Trait* X) {
		TRAITS.insert(std::make_pair(N, X));
	}
	//kin_list(скорей всего масив *векторны*)
	//Skills 
	//Skill Knowlege
	//Knowlege
	//

	void Tick() {
		printf("Char\n");
	}; // тик


};
	










