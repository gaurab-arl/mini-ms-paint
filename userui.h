#ifndef USERUI_H
#define USERUI_H

#include<graphics.h>
#include <iostream>
#include <stdio.h>
#include <string.h>

#define SCREEN_WIDTH 1000
#define SCREEN_HEIGHT 700

using namespace std;

void options(int x , int y );
void component_clicked();
void background_images();
void title();
void main_ui();
void load_images();

void collide();
void click_check();


#endif