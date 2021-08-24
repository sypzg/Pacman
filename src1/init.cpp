//init.cpp
#include "init.h"
#include "main.h"
//initialize game
void init(void){
    //clear screen
    glClearColor(0.0,0.0,0.0,0.0);
    glShadeModel(GL_FLAT);//draw
    //Reset the button
    for(int i=0; i<256; i++){
        keyStates[i] = false;
    }
    //fill the map with the obstacles
    bitmap.push_back({ true, true, true, true, true, true, true, true, true, true, true, true, true, true, true });
    bitmap.push_back({ true, false, false, false, false, false, false, false, false, false, false, false, false, false, true });
    bitmap.push_back({ true, false, true, true, true, true, false, true, true, false, true, true, true, false, true });
    bitmap.push_back({ true, false, false, false, false, true, false, true, false, false, false, false, true, false, true});
    bitmap.push_back({ true, false, true, true, false, false, false, false, false, true, true, false, false, false, true});
    bitmap.push_back({ true, false, false, true, true, false, true, true, true, true, false, false, true, false, true});
    bitmap.push_back({ true, true, false, false, false, false, true, false, true, true, false, true, true, false, true});
    bitmap.push_back({ true, true, true, true, true, false, false, false, true, false, false, false, false, false, true});
    bitmap.push_back({ true, true, false, false, false, false, true, false, true, true, false, true, true, false, true });
    bitmap.push_back({ true, false, false, true, true, false, true, true, true, true, false, false, true, false, true });
    bitmap.push_back({ true, false, true, true, false, false, false, false, false, true, true, false, false, false, true });
    bitmap.push_back({ true, false, false, false, false, true, false, true, false, false, false, false, true, false, true });
    bitmap.push_back({ true, false, true, true, true, true, false, true, true, false, true, true, true, false, true });
    bitmap.push_back({ true, false, false, false, false, false, false, false, false, false, false, false, false, false, true });
    bitmap.push_back({ true, true, true, true, true, true, true, true, true, true, true, true, true, true, true });
}