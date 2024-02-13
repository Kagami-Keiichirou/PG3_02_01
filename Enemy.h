#pragma once

#include <stdio.h>

enum class Phase {
	Approach,
	Shot,
	Leave
};
class Enemy
{
private:
	Phase phase_ = Phase::Approach;
	static void (Enemy::* pFunc[])();
	int count = 1000;
public:
	void Approach();
	void Shot();
	void Leave();
	void Update();
};