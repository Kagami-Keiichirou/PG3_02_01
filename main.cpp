#include "Enemy.h"
#include <stdio.h>
#include <Windows.h>

int main() {
	Enemy* enemy = new Enemy;
	while (true){
		enemy->Update();
	}
	delete enemy;
	return 0;
}