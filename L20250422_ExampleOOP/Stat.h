#pragma once

class Stat
{
public:
	Stat();
	virtual ~Stat();
	void OnHit(Stat* Attacker);
	void OnDead(Stat* Attacker);
protected:
	int HP;
	int MP;
	int Level;
	float AttackPoint;
	float DefensePoint;
	float MoveSpeed;
};

