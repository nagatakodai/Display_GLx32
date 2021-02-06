#include "pch.h"

#include <GL/glut.h>
#include <stdio.h>

void keyboard(unsigned char key, int x, int y) {

	printf("%cが押されました(%d, %d)\n", key, x, y);
}

void mouse(int button, int state, int x, int y) {

	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		printf("左ボタンを押しました (%d, %d)\n", x, y);
	else if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
		printf("左ボタンを離しました (%d, %d)\n", x, y);
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(400, 400);
	glutCreateWindow("CG_sample");
	glutDisplayFunc(display);
	glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glutMainLoop();
	return 0;

}