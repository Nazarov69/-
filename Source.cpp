#include <iostream>
using namespace std;

//---------------------------------------------------------------------------------------------------------------------
class Weapon {
	int damage; // � ���� �������� ����
public:
	virtual void Shoot() = 0;

};
//---------------------------------------------------------------------------------------------------------------------
class ExplosiveWeapon : public Weapon {
	int boom ; // � ���� �������� ����, ���������� 
public:
	void Shoot() override {
		cout << "� ���� ��������" << endl;

	}

};
//---------------------------------------------------------------------------------------------------------------------
class RangedWeapon : public Weapon { 
	int PShoot; // � ���� �������� ����, �������� (P ����� ���������� "���������" ��� ����������, ������ ��� ����������� ������� �������� ����� ������������)
public:
	void Shoot() override {
		cout << "� ���� ��������" << endl;
	}

};
//---------------------------------------------------------------------------------------------------------------------
class Gun : public RangedWeapon {
	int x1; // � ���� �������� ����, �������� ���� ���
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
	int x3; // � ���� �������� ����, �������� ��� ����
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
	int boom3; // � ���� �������� ���� � ���������� ��� ����
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
	int boom1; // � ���� �������� ���� � ���������� ���� ���
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