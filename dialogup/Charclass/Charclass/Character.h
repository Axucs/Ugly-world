
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
		adf1,  //������ �������
		adf2,  //���������� �������
		adf3,  //����� ��������
		adf4,  //�������� �������
		adf5  //����������� �������� �������
	};
	enum Age {
		ag1,    //"�����"
		ag2,    //"�������"
		ag3,    //"��������"
		ag4    //"������"
	};
	enum Neatness {
		test
	};
	enum Society_Class {
		SC1,      //"��������"
		SC2,      //"�����������"
		SC3,      //"�����������"
		SC4,      //"��������"
		SC5,      //"������"
		SC6,      //"�����������"
		SC7,      //"�����������"
		SC8,      //"�����"
		SC9		  //"�������"
	};
	enum class Main_task {
		mat1,    //��������
		mat2,    //����������� ��������
		mat3,    //����������� �����
		mat4,    //������ �����
		mat5,    //������ �����
		mat6     //����� ������ �����
	};
	enum class Moment_task {
		mot1,   //��������
		mot2,   //����������� �������
		mot3,   //����������� �����
		mot4,   //������ �����
		mot5,   //������ �����
		mot6    //����� ������ �����
	};
	enum class Thems {
		Politics,		 //��������
		Fauna,			 //�����
		History,		 //�������
		Architecture,	 //�����������
		Handicraft,		 //�����, ������������ ���� �����
		Medicine,		 //��������
		Theology,		 //��������
		Weather,		 //������, ������
		Society,		 //�������� 
		Warfare,		 //�����
		Economy,		 //���������
		Flora,			 //�����
		Entertainmen,	 //�����������
		Culture,		 //��������
		Law,			 //������, �������
		Family,			 //���� 
		Rumors,			 //����� 
		News			 //�������
	};
	enum class Traits {
		Honest 		   ,//�������
		Deceptive 	   ,//������
		Generous 	   ,//������
		Greedy 		   ,//������
		Lonely 		   ,//��������
		Sociable	   ,//�����������
		Gambler 	   ,//��������
		cold_blooded   ,//�������������
		Responsible    ,//�������������
		Irresponsible  ,//����������������
		Attentive 	   ,//������������
		Absentminded   ,//����������
		Careful 	   ,//����������
		sloppy 		   ,//����������
		Delicate 	   ,//����������
		Rough 		   ,//������
		Conceited 	   ,//����������
		Self_sufficient,//���������������
		Rasper 		   ,//������
		Flexible 	   ,//������
		Farsighted 	   ,//������������
		Myopic 		   ,//����������
		Endurant 	   ,//����������
		Individualist  ,//�������������
		Collectivist   ,//������������
		Cynical 	   ,//��������
		Sentimental    ,//���������������
		Cunning 	   ,//������
		Guileless 	   ,//������������
		Calm 		   ,//���������
		Dynamic 	   ,//����������
		Ambitious 	   ,//����������������
		Frivolous 	   ,//��������������
		Unpredictable  ,//���������������
		Stable 		   ,//����������
		Unstable 	   ,//������������
		Proud 		   ,//������
		Humble 		   ,//���������
		Demanding 	   ,//��������������
		Witty 		   ,//����������
		Melancholy 	   ,//�������������
		dedicated 	   ,//���������
		Independent    ,//�����������
		Opinionated    ,//�������
		Diplomatic 	   ,//�������������
		conflicting    	//�����������
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
	//kin_list(������ ����� ����� *��������*)
	//Skills 
	//Skill Knowlege
	//Knowlege
	//

	void Tick() {
		printf("Char\n");
	}; // ���


};
	










