/*
 *  drawFrame.h
 *  keyPainter
 *
 *  Created by Maxim Safioulline on 4/14/11.
 *  Copyright 2011 Connected Cat Media. All rights reserved.
 *  http://connectedcatmedia.com
 *
 */

#ifndef _DRAW_FRAME
#define _DRAW_FRAME

#include "ofMain.h"

class drawFrame {
	
public:
	
	//methods
	void update();
	void draw();
	void keyPressed(int key);
	
	//constructor
	drawFrame();
	
	//variables
	int posX;  //positions of the frame
	int posY;
	float grid;
	
private:
};

#endif