﻿#pragma once
#include "Pos.h"
#include <iostream>

using namespace std;

class Character
{
protected:
	int Hp;
	int power;
	Pos pos;
public:
	Character();
	virtual void Die() = 0;		//죽는 함수
	void Hit(const int power);	//피격 함수

	Pos GetPos();
	void SetPos(int x, int y);

};

