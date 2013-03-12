/*
 *  drawFrame.h
 *  keyPainter
 *
 *  Created by Maxim Safioulline on 4/14/11.
 *  Copyright 2011 Connected Cat Media. All rights reserved.
 *  http://connectedcatmedia.com
 *
 */

#include "drawFrame.h"


drawFrame::drawFrame(){
	
	posX = 0;
	posY = 0;
	grid =0;
}

void drawFrame::draw(){
	ofEnableAlphaBlending();
	ofSetColor(200, 200, 200, 127);
	ofNoFill();
	ofRect(posX, posY, 200, 80);
	
	for (int i = 0; i < 10; i++) {
		grid = (float)i * 20;
		ofRect(grid, 0, 20, 20);
	}
	for (int i = 0; i < 10; i++) {
		grid = (float)i * 20;
		ofRect(grid, 20, 20, 20);
	}
	for (int i = 0; i < 10; i++) {
		grid = (float)i * 20;
		ofRect(grid, 40, 20, 20);
	}
	for (int i = 0; i < 10; i++) {
		grid = (float)i * 20;
		ofRect(grid, 60, 20, 20);
	}
	ofDisableAlphaBlending();
}

void drawFrame::keyPressed(int key) {
	
}