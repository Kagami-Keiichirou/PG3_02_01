#include <stdio.h>
#include "Enemy.h"

int main()
{
	Enemy enemy;

	bool GameLoop = true;

	int i = 0;

	while (i < 3)
	{
		enemy.Update();
		i++;
	}
	return 0;
}