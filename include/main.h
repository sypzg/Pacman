//main.h
#ifndef _MAIN_H_
#define _MAIN_H_
#include <vector>
#include<GL/glut.h>
#include<iostream>
#include<cstring>
#define _USE_MATH_DEFINES
#include <math.h>
#include <deque>
#include <vector>
#include<stdlib.h>
using namespace std;

extern bool replay;         //check to see if the game is started
extern bool over;           //check to see if game is over
extern float squareSize;    //a size of a square
extern float xIncrement;    //x coordinate 
extern float yIncrement;    //y coordinate
extern int rotation;        //face to
extern float* monster1;     //the coordinate and direction of the monster
extern float* monster2;
extern float* monster3;
extern float* monster4;
extern vector<int> border;  //the coordinate of the wall

//coordinate of the barrier
extern vector<int> obstaclesTop;
extern vector<int> obstaclesMiddle;
extern vector<int> obstaclesBottom;
extern deque<float> food;
extern vector<vector<bool>> bitmap;     //2d-image, place to move
extern bool* keyStates;                 //keyboard state
extern int points;                      //point you get



#endif
