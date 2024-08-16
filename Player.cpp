#include "Player.h"


void Player::Move(float amount_x, float amount_y)
{
	posX += amount_x* PLAYER_SPEED;
	posY += amount_y* PLAYER_SPEED;
    printPos();
}


void Player::Dibujar()
{
    glPushMatrix(); 
    glTranslatef(posX, posY, Z_POS);
    glutSolidSphere(0.5, 20, 20);
    cola->DibujarCola(20, 6, 4, 0, 0, Z_POS);
    //cola->DibujarCola(25, 3, 4, 0, -0.1, Z_POS);
    //cola->DibujarCola(25, 3, 4, 0, 0.5, Z_POS);
    glPopMatrix();
    
}

void Player::printPos()
{
    std::cout << "Pos x: " << posX << " Pos y: " << posY << std::endl;
}
