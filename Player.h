#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include <time.h>
#include <iostream>
#include "Cola.h"

#define PLAYER_SPEED 10
#define Z_POS 0

class Player
{

private:
	float posX, posY;
	Cola* cola;
public:
	Player() {
		posX = 0;
		posY = 0;
		printPos();
		cola = new Cola();
	}

	void Move(float amount_x, float amount_y);
	void Dibujar();

	void printPos();
};

