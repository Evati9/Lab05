#include < windows.h >
#include < gl/glut.h >
#include < math.h >

 float angle = 0.0;

 void init(void)
 {
	 glClearColor(1.0, 1.0, 1.0, 1.0);
	 // only need to set this once
	 glShadeModel(GL_SMOOTH);
	 glEnable(GL_DEPTH_TEST);

	 //Brass
	 GLfloat ambient[] = { 0.329412, 0.223529, 0.027451, 1.0 };
	 GLfloat diffuse[] = { 0.780392, 0.568627, 0.113725, 1.0 };
	 GLfloat specular[] = { 0.992157, 0.941176, 0.807843, 1.0 };
	 GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	   glMateriali(GL_FRONT, GL_SHININESS, 27.8974);
	
	 ////Bronze
	 //GLfloat ambient[] = { 0.2125, 0.1275, 0.054, 1.0 };
	 //GLfloat diffuse[] = { 0.714, 0.4284 , 0.18144, 1.0 };
	 //GLfloat specular[] = { 0.393548, 0.271906, 0.166721, 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 25.6);


	 ////Polished Bronze
	 //GLfloat ambient[] = { 0.25, 0.148, 0.06475, 1.0 };
	 //GLfloat diffuse[] = { 0.4 , 0.2368 , 0.1036, 1.0 };
	 //GLfloat specular[] = { 0.774597, 0.458561, 0.200621, 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 76.8);

	 ////Chrome 
	 //GLfloat ambient[] = { 0.25, 0.25, 0.25, 1.0 };
	 //GLfloat diffuse[] = { 0.4 , 0.4 , 0.4, 1.0 };
	 //GLfloat specular[] = { 0.774597, 0.774597, 0.774597, 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 76.8);
	 
	 ////Copper
	 //GLfloat ambient[] = { 0.19125, 0.0735, 0.0225 , 1.0 };
	 //GLfloat diffuse[] = { 0.7038 , 0.27048  , 0.0828, 1.0 };
	 //GLfloat specular[] = { 0.256777, 0.137622, 0.086014, 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 12.8);

	 // //Polished Copper
	 //GLfloat ambient[] = { 0.2295 , 0.08825, 0.0275  , 1.0 };
	 //GLfloat diffuse[] = { 0.5508  , 0.2118  , 0.066 , 1.0 };
	 //GLfloat specular[] = { 0.580594 , 0.223257, 0.0695701 , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 51.2);

	 ////Gold
	 //GLfloat ambient[] = { 0.24725 , 0.1995, 0.0745  , 1.0 };
	 //GLfloat diffuse[] = { 0.75164   , 0.60648   , 0.22648  , 1.0 };
	 //GLfloat specular[] = { 0.628281  , 0.555802, 0.366065 , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 51.2);

	 ////Polished Gold
	 //GLfloat ambient[] = { 0.24725 , 0.2245, 0.0645  , 1.0 };
	 //GLfloat diffuse[] = { 0.34615   , 0.3143    , 0.0903  , 1.0 };
	 //GLfloat specular[] = { 0.797357  , 0.723991 , 0.208006 , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 83.2);

	 ////Pewter
	 //GLfloat ambient[] = { 0.105882 , 0.058824, 0.113725   , 1.0 };
	 //GLfloat diffuse[] = { 0.427451    , 0.470588    , 0.541176  , 1.0 };
	 //GLfloat specular[] = { 0.333333  , 0.333333 , 0.521569 , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 9.84615);

	 ////Silver
	 //GLfloat ambient[] = { 0.19225 , 0.19225, 0.19225 , 1.0 };
	 //GLfloat diffuse[] = { 0.50754 , 0.50754 , 0.50754 , 1.0 };
	 //GLfloat specular[] = { 0.508273 , 0.508273 , 0.508273 , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 51.2);


	 ////Polished Silver
	 //GLfloat ambient[] = { 0.23125  , 0.23125, 0.23125  , 1.0 };
	 //GLfloat diffuse[] = { 0.2775  , 0.2775  , 0.2775  , 1.0 };
	 //GLfloat specular[] = { 0.773911  , 0.773911  , 0.773911  , 1.0 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 89.6);

	 ////Emerald
	 //GLfloat ambient[] = { 0.0215  , 0.1745, 0.0215  , 0.55 };
	 //GLfloat diffuse[] = { 0.07568   , 0.61424   , 0.07568   , 0.55 };
	 //GLfloat specular[] = { 0.633   , 0.727811   , 0.633   , 0.55 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 76.8);

	 ////Jade
	 //GLfloat ambient[] = { 0.135  , 0.2225, 0.1575  , 0.95 };
	 //GLfloat diffuse[] = { 0.54    , 0.89  , 0.63  , 0.95 };
	 //GLfloat specular[] = { 0.316228  , 0.316228 , 0.316228 , 0.95 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 12.8);

	 ////Obsidian
	 //GLfloat ambient[] = { 0.05375  , 0.05, 0.06625  , 0.82 };
	 //GLfloat diffuse[] = { 0.17   , 0.22525   , 0.63  , 0.82 };
	 //GLfloat specular[] = { 0.332741   , 0.328634  , 0.346435  , 0.82 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 38.4);

	 ////Pearl
	 //GLfloat ambient[] = { 0.25  , 0.20725, 0.20725  , 0.922 };
	 //GLfloat diffuse[] = { 1.0   , 0.829    , 0.829   , 0.922 };
	 //GLfloat specular[] = { 0.296648 , 0.296648 , 0.296648 , 0.922 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 11.264);

	 ////Ruby
	 //GLfloat ambient[] = { 0.1745   , 0.01175 , 0.01175   , 0.55 };
	 //GLfloat diffuse[] = { 0.61424    , 0.04136     , 0.04136    , 0.55 };
	 //GLfloat specular[] = { 0.727811  , 0.626959  , 0.626959  , 0.55 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 76.8);

	 ////Turquoise
	 //GLfloat ambient[] = { 0.1  , 0.18725 , 0.1745 , 0.8 };
	 //GLfloat diffuse[] = { 0.396     , 0.74151   , 0.69102     , 0.8 };
	 //GLfloat specular[] = { 0.297254   , 0.30829  , 0.306678   , 0.8 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 12.8);

	 ////Black Plastic
	 //GLfloat ambient[] = { 0.0   , 0.0  , 0.0  , 0.1 };
	 //GLfloat diffuse[] = { 0.01 , 0.01  , 0.01  , 0.1 };
	 //GLfloat specular[] = { 0.50  , 0.50 , 0.50 , 0.1 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 32);

	 ////Black Rubber
	 //GLfloat ambient[] = { 0.02    , 0.02   , 0.02   , 0.1 };
	 //GLfloat diffuse[] = { 0.01 , 0.01  , 0.01  , 0.1 };
	 //GLfloat specular[] = { 0.4   , 0.4  , 0.4  , 0.1 };
	 //GLfloat specref[] = { 0.3f, 0.3f, 0.3f, 1.0f };
	 //glMateriali(GL_FRONT, GL_SHININESS, 10);



	 // the position of a light
	 GLfloat position[] = { 5.0 , 5.0 , 5.0 , 0.0 };

	 glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient);
	 glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
	 glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
	 glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
	 glLightfv(GL_LIGHT0, GL_POSITION, position);
	 glEnable(GL_LIGHTING);
	 glEnable(GL_LIGHT0);
	 glEnable(GL_COLOR_MATERIAL);
	 glColorMaterial(GL_FRONT, GL_AMBIENT_AND_DIFFUSE);
	 glMaterialfv(GL_FRONT, GL_SPECULAR, specref);


 }
	  void drawMyObjects()
	{
	 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	 glRotatef(angle, 0, 1, 0);
	 angle += 0.01;
	 glutSolidTeapot(3.0);
	}

 void display(void)
 {
	 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	 glColor3f(1.0, 1.0, 1.0);
	 glLoadIdentity();
	 gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	 glScalef(0.5, 0.5, 0.5);
	 drawMyObjects();
	 glutSwapBuffers();
	 }

 void reshape(int w, int h)
 {
	 glViewport(0, 0, w, h);
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	 glFrustum(-1.0, 1.0, -1.0, 1.0, 1.5, 20.0);
	 glMatrixMode(GL_MODELVIEW);
	 }

 int main(int argc, char** argv)
 {
	 glutInit(&argc, argv);
	 glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	 // double buffered in RGB format
	 glutInitWindowSize(640, 480);
	 glutCreateWindow(" Material setting program ");
	 init(); // initialize stuff
	 glutDisplayFunc(display);
	 glutIdleFunc(display);
	 glutReshapeFunc(reshape);
	 glutMainLoop();
	 return 0;
	 }
