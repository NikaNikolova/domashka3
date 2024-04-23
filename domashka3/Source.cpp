#include <iostream>
#include <locale>
#include "windows.h"
using namespace std;

class Human // ������
{
public:
	float growth;
	string hair_color;
	string name;
	string gender;
	int age;
	string laugh;
	string massage;
	bool tshirts;
	string color_tshorts;
	bool sits;
	int energy;
	int hungry;
	void Sits()
	{
		cout << name << " ������..." << endl;
		sits = true;
		if (this->hungry < 90 && this->energy > 0)
		{
			this->hungry += 5;
			this->energy -= 1;
			return;

		}
		else
			cout << "���� ����" << endl;
	}
	void Drink(string liquid)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << name << " �'�..." << liquid << endl;
			this->energy -= 20;
			this->hungry -= 10;
			return;
		}
		else
			cout << "���������� ������ ��� �� ��������" << endl;
	}
	void Say(string nick)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "���!" << nick << " ������ ����?" << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "���������� ������ ��� �� ��������" << endl;
	}
	void Laugh()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << laugh << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "���������� ������ ��� �� ��������" << endl;
	}
	void ToFeed()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << name << " ����... " << endl;
			this->energy -= 10;
			this->hungry += 5;
			return;
		}
		else
			cout << "���������� ������ ��� �� ��������" << endl;
	}
	void Print()
	{
		cout << "�����a: " << endl;
		cout << "��'�:" << name << endl;
		cout << "³�:" << age << endl;
		cout << "������: " << energy << "%" << endl;
		cout << "�����: " << hungry << "%" << endl;
	}
};
class ROOM // ʲ�����
{

public:
	int count_room = 1;
	float height = 3; // m
	float width = 5; //m
	int count_picture = 1;
	int count_plants = 0;
	int count_mirror = 1;
	int count_begs = 3;
	int count_angle = 4;
	string color_wall = "green";
	string room_closed;
	bool stan_room = true;
	void TheRoomIsVentilated()
	{
		cout << "������ ������������..." << endl;
	}
	void TheRoomIsCleaned()
	{
		cout << "������� �����������..." << endl;
	}
	void TheRoomIsClosed(Human human)
	{
		if (stan_room < false)
		{
			cout << "� �������� �����..." << endl;
			human.Sits();
			return;
		}
		else
		{
			cout << "� ������ �����..." << endl;
			human.Sits();
			return;
		}
	}
	void TheRoomIsOpen()
	{
		cout << "������ ��������..." << endl;
	}
	void TheRoomIsNotLit()
	{
		cout << "������ �� ����������..." << endl;
	}
};
class MobilePhone // ��������� �������
{
public:
	string color_phone = "black";
	string brand = "iphone";
	bool case_phone = true;
	string case_color = "black";
	int count_camers = 2;
	string port_type = "lightning";
	double prise = 25999; //$
	int count_contact = 52;
	string call;
	void PhoneCall()
	{
		cout << call << endl;
	}
	void Vibration()
	{
		cout << "�������..." << endl;
	}
	void TurnOnThePhone()
	{
		cout << "������� ���������..." << endl;
	}
	void WatchingVideo(Human& human)
	{
		if (human.energy > 0 && human.hungry < 90)
		{
			if (human.sits)
			{
				cout << "�������� ����..." << endl;
				human.Laugh();
				human.energy -= 20;
				human.hungry += 5;
				return;
			}
		}
		else
			cout << "���������� ������ ��� �� ��������" << endl;
	}
	void Battery(string percent)
	{
		cout << "�� ��������: " << percent << " %" << endl;
	}
};
class Microphone // ̲������
{
public:
	string color_micro = "black";
	bool buttom = true;//�������� ������ ��� �������� ����
	string brand = "Trust GXT";
	int frequency_range = 5000;
	float cord_length = 1.5;//m
	string position;
	string connection;
	string connection_type = "USB";
	void IncludeMiro()
	{
		cout << "������� ��������..." << endl;
	}
	void TurnOffMiro()
	{
		cout << "������� ��������..." << endl;
	}
	void Position()
	{
		cout << position << endl;
	}
	void Connection()
	{
		cout << connection << endl;
	}
	void NoConnection()
	{
		cout << "������� �� �������� �� �������..." << endl;
	}
};
class Raccoon // ����
{
public:
	string color_wool = "gray";
	float weight;
	string eyes_color = "green";
	string nick;
	string gender = "man";
	string noize;
	int energy;
	int hungry;
	string smell = "stink";
	int age;
	bool wool = true;
	void Run(Human& human)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "���� ����� ��..." << human.name << "." << endl;
			human.Say(nick);
			this->energy -= 20;
			this->hungry += 10;
			this->weight -= 0.1;
			return;
		}
		else
			cout << "� ����� ���������� ������ ��� �� ��������" << endl;
	}
	void MakeNoize()
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << noize << endl;
			this->energy -= 10;
			this->hungry += 10;
			return;
		}
		else
			cout << "� ����� ���������� ������ ��� �� ��������" << endl;
	}
	void Walk()
	{
		cout << "���� ������..." << endl;
	}
	void Eat(Human& human, string meal)
	{
		if (this->energy > 0 && this->hungry > 90)
		{
			human.ToFeed();
			cout << "���� ����..." << meal << endl;
			this->energy -= 10;
			this->hungry -= 50;
			this->weight += 0.9;
			return;
		}
		else
			cout << "� ����� ���������� ������ ��� �� ��������" << endl;
	}
	void Jump(Raccoon& human)
	{
		if (this->energy > 0 && this->hungry < 90)
		{
			cout << "���� ������..." << endl;
			human.MakeNoize();
			this->energy -= 10;
			this->hungry += 10;
			return;
		}
		else
			cout << "� ����� ���������� ������ ��� �� ��������" << endl;
	}
	void Print()
	{
		cout << "����: " << endl;
		cout << "��'�:" << nick << endl;
		cout << "³�:" << age << endl;
		cout << "������: " << energy << "%" << endl;
		cout << "�����: " << hungry << "%" << endl;
		cout << "����: " << weight << "��" << endl;
	}
};


int main()
{
	//setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Human m;
	m.name = "�������";
	m.laugh = "��-��-��!";
	m.energy = 90;//%
	m.age = 18;//����
	m.growth = 157.2;//��
	m.hair_color = "���";
	m.gender = "����";
	m.tshirts = true;
	m.color_tshorts = "�����";
	m.sits = false;
	m.hungry = 30;

	MobilePhone mb;

	Raccoon r;
	r.noize = "����!";
	r.nick = "������";
	r.weight = 5.6; //kg
	r.age = 2;
	r.energy = 100;
	r.hungry = 70;

	ROOM room;
	room.room_closed = "������ ��������...";
	string meal;

	m.Print();
	r.Print();
	cout << "------------------------------------" << endl;
	room.TheRoomIsClosed(m);
	mb.WatchingVideo(m);
	r.Run(m);
	r.Jump(r);
	cout << "�� ���� ���� ����?" << endl;
	cin >> meal;
	r.Eat(m, meal);
	cout << "------------------------------------" << endl;
	m.Print();
	r.Print();


}

