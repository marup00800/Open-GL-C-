#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(128.0f/255.0, 128.0f/255.0, 128.0f/255.0, 0.0f/255.0); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(.5);
	// Draw a Red 1x1 Square centered at origin
	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(0.0f/255.0f, 255.0f/255.0f, 0.0f/255.0f); // Red

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, 1.0f);    // x, y

    glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(-1.0f, 0.0f);    // x, y

	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.0f, -1.0f);

	glEnd();

    glColor3f (255.0f/255.0, 0.0f/255.0, 0.0f/255.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.5f, 0.8f);
    glVertex2f(-0.8f, 0.4f);
    glVertex2f(-0.2f, 0.4f);

    glEnd();

    glColor3f (232.0f/255.0, 133.0f/255.0, 20.0f/255.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.5f, -0.1f);
    glVertex2f(0.3f, -0.7f);
    glVertex2f(0.7f, -0.7f);

    glEnd();

    glColor3f (0.0f/255.0, 255.0f/255.0, 0.0f/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2f, -0.8f);
    glVertex2f(-0.2f, -0.2f);
    glVertex2f(-0.8f, -0.2f);
    glVertex2f(-0.8f, -0.8f);



    glEnd();

     glColor3f (255.0f/255.0, 255.0f/255.0, 0.0f/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.2f, 0.6f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.6f, 0.4f);
    glVertex2f(0.7f, 0.6f);
    glVertex2f(0.6f, 0.8f);
    glVertex2f(0.3f, 0.8f);


    glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

