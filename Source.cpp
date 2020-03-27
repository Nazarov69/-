#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------------
class Weapon {
	int damage; // я умею наносить урон
public:
	virtual void Shoot() = 0;

};
//---------------------------------------------------------------------------------------------------------------------
class ExplosiveWeapon : public Weapon {
	int boom ; // я умею наносить урон, взрываться 
public:
	void Shoot() override {
		cout << "Я имею взрывать" << endl;

	}

};
//---------------------------------------------------------------------------------------------------------------------
class RangedWeapon : public Weapon { 
	int PShoot; // я умею наносить урон, стрелять (P будет обозначать "указатель" как переменная, потому что одноименную функцию неудобно будет использовать)
public:
	void Shoot() override {
		cout << "Я имею стрелять" << endl;
	}

};
//---------------------------------------------------------------------------------------------------------------------
class Gun : public RangedWeapon {
	int x1; // я умею наносить урон, стрелять один раз
public:
	int GetX1() {
		return x1;
	}

	void SetX1(int x1) {
		this->x1 = x1;
	}
	void Shoot() override {
		cout << "BANG!" << endl;
	}
};
//---------------------------------------------------------------------------------------------------------------------
class SubmachineGun : public RangedWeapon {
	int x3; // я умею наносить урон, стрелять три раза
public:
	int GetX3() {
		return x3;
	}
	
	void SetX3(int x3) {
		this->x3 = x3;
	}

	void Shoot() override {
		cout << "BANG! BANG! BANG!" << endl;

	}
};
//---------------------------------------------------------------------------------------------------------------------
class Bazooka : public ExplosiveWeapon {
	int boom3; // я умею наносить урон и взрываться три раза
public:
	int GetBoom3() {
		return boom3;
	}

	void SetBoom3(int boom3) {
		this->boom3 = boom3;
	}
		void Shoot() override {
		cout << "BOOM! BOOM! BOOM!" << endl;


	}

};
//---------------------------------------------------------------------------------------------------------------------
class Grenade : public ExplosiveWeapon {
	int boom1; // я умею наносить урон и взрываться один раз
public:
	int GetBoom1() {
		return boom1;
	}

	void SetBoom1(int boom1) {
		this->boom1 = boom1;
	}
	void Shoot() override {
		cout << "BOOM!" << endl;
	}
};
//---------------------------------------------------------------------------------------------------------------------
class Player {
public:
	void Shoot(Weapon* weapon) {
		weapon->Shoot();
	}
};
//---------------------------------------------------------------------------------------------------------------------



int main() {
	setlocale(LC_ALL, "ru");

	Gun gun;
	SubmachineGun sub;
	Bazooka bazooka;
	Grenade grenade;
	Player player;


	grenade.SetBoom1(60);
	int result = grenade.GetBoom1();
	cout << result << endl;

	player.Shoot(&grenade);

}