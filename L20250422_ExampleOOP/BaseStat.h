#pragma once

class BaseStat
{
public:
	BaseStat(int HP, int MP, int Level, float AttackPoint, float DefensePoit, float MoveSpeed);
	virtual ~BaseStat();
	void OnHit(BaseStat* Attacker);
	virtual void OnDead(BaseStat* Attacker);

protected:
	int HP;
	int MP;
	int Level;
	float AttackPoint;
	float DefensePoint;
	float MoveSpeed;
};

