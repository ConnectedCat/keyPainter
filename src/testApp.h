#pragma once

#include "ofxVectorGraphics.h"
#include "ofMain.h"
#include "drawFrame.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    void resetSequencer();//reset the drawing frame
	
	drawFrame myDrawFrame; //frame for drawing
	
	bool square1[4][10];
	bool square2[4][10];
	bool square3[4][10];
	bool square4[4][10];
	bool square5[4][10];
	bool square6[4][10];
	bool square7[4][10];
	bool square8[4][10];
	bool square9[4][10];
	bool square0[4][10];
	bool squareQ[4][10];
	bool squareW[4][10];
	bool squareE[4][10];
	bool squareR[4][10];
	bool squareT[4][10];
	bool squareY[4][10];
	bool squareU[4][10];
	bool squareI[4][10];
	bool squareO[4][10];
	bool squareP[4][10];
	bool squareA[4][10];
	bool squareS[4][10];
	bool squareD[4][10];
	bool squareF[4][10];
	bool squareG[4][10];
	bool squareH[4][10];
	bool squareJ[4][10];
	bool squareK[4][10];
	bool squareL[4][10];
	bool squareSEM[4][10];
	bool squareZ[4][10];
	bool squareX[4][10];
	bool squareC[4][10];
	bool squareV[4][10];
	bool squareB[4][10];
	bool squareN[4][10];
	bool squareM[4][10];
	bool squareCOMMA[4][10];
	bool squareSTOP[4][10];
	bool squareSLASH[4][10];
	
	bool setVal;
	
	bool randBack;
	bool blackBack;
};
