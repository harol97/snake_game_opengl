//g++ prueba1.cpp -lGL -lGLU -lglut
//you have to inicializate the features before glBegin()
//I get it


#include <GL/freeglut.h>
#include <iostream>
#include "gameWindow.h"
int main(int arg, char** args){
    
    glutInit(&arg, args);

    Window gamewindow(500,500);

    gamewindow.createWindow("titulo");

    glutMainLoop();

return 0;
}