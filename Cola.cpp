#include "Cola.h"

void Cola::DibujarCola(float Angulo, int n, int m, float x, float y, float z)
{
	
	glPushMatrix();

	glTranslatef(x, y,z);

	glRotatef(-(GLfloat)Angulo*2, 0.0, 0.0, 1.0);

	float unit = 0.1;
	float offset = -0.01;
	glTranslatef(unit, 0.0, 0.0);
	
	for (int j = 0; j < m; j++)
	{
		glRotatef(13, 0.0, 0.0, 1.0);
		glTranslatef(-0.1f, 0, 0);
		
		

		for (int i = 0; i < n; i++)
		{
			glTranslatef(unit+ offset, 0.0, 0.0);
			glRotatef((GLfloat)Angulo, 0.0, 0.0, 1.0);
			glTranslatef(unit + offset, 0.0, 0.0);
			glPushMatrix();
			glScalef(unit*2, 0.2, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}
		
		for (int i = 0; i < n; i++)
		{
			glTranslatef(unit + offset, 0.0, 0.0);
			glRotatef(-(GLfloat)Angulo, 0.0, 0.0, 1.0);
			glTranslatef(unit + offset, 0.0, 0.0);
			glPushMatrix();
			glScalef(unit*2, 0.2, 1.0);
			glutSolidCube(1.0);
			glPopMatrix();
		}
	}



	


	

	glPopMatrix();
}

