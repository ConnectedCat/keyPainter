#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(255, 255, 255);
	ofSetWindowTitle("paint with your keyboard!!!");
	cout << "Hello!";
	randBack = false;
	blackBack = false;
	
	resetSequencer();
	
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<10;y++)
		{
			square1[x][y] = false;
			square2[x][y] = false;
			square3[x][y] = false;
			square4[x][y] = false;
			square5[x][y] = false;
			square6[x][y] = false;
			square7[x][y] = false;
			square8[x][y] = false;
			square9[x][y] = false;
			square0[x][y] = false;
			squareQ[x][y] = false;
			squareW[x][y] = false;
			squareE[x][y] = false;
			squareR[x][y] = false;
			squareT[x][y] = false;
			squareY[x][y] = false;
			squareU[x][y] = false;
			squareI[x][y] = false;
			squareO[x][y] = false;
			squareP[x][y] = false;
			squareA[x][y] = false;
			squareS[x][y] = false;
			squareD[x][y] = false;
			squareF[x][y] = false;
			squareG[x][y] = false;
			squareH[x][y] = false;
			squareJ[x][y] = false;
			squareK[x][y] = false;
			squareL[x][y] = false;
			squareSEM[x][y] = false;
			squareZ[x][y] = false;
			squareX[x][y] = false;
			squareC[x][y] = false;
			squareV[x][y] = false;
			squareB[x][y] = false;
			squareN[x][y] = false;
			squareM[x][y] = false;
			squareCOMMA[x][y] = false;
			squareSTOP[x][y] = false;
			squareSLASH[x][y] = false;
		}
	}


}

//--------------------------------------------------------------
void testApp::resetSequencer(){
	
	for(int x=0;x<4;x++)
	{
		for(int y=0;y<10;y++)
		{
			square1[x][y] = false;
			square2[x][y] = false;
			square3[x][y] = false;
			square4[x][y] = false;
			square5[x][y] = false;
			square6[x][y] = false;
			square7[x][y] = false;
			square8[x][y] = false;
			square9[x][y] = false;
			square0[x][y] = false;
			squareQ[x][y] = false;
			squareW[x][y] = false;
			squareE[x][y] = false;
			squareR[x][y] = false;
			squareT[x][y] = false;
			squareY[x][y] = false;
			squareU[x][y] = false;
			squareI[x][y] = false;
			squareO[x][y] = false;
			squareP[x][y] = false;
			squareA[x][y] = false;
			squareS[x][y] = false;
			squareD[x][y] = false;
			squareF[x][y] = false;
			squareG[x][y] = false;
			squareH[x][y] = false;
			squareJ[x][y] = false;
			squareK[x][y] = false;
			squareL[x][y] = false;
			squareSEM[x][y] = false;
			squareZ[x][y] = false;
			squareX[x][y] = false;
			squareC[x][y] = false;
			squareV[x][y] = false;
			squareB[x][y] = false;
			squareN[x][y] = false;
			squareM[x][y] = false;
			squareCOMMA[x][y] = false;
			squareSTOP[x][y] = false;
			squareSLASH[x][y] = false;
		}
	}
	myDrawFrame.posX = 0;
	myDrawFrame.posY = 0;
}


//--------------------------------------------------------------
void testApp::update(){
    if (blackBack) {
		ofBackground(0, 0, 0);
	}
	else {
		ofBackground(255, 255, 255);
	}
}

//--------------------------------------------------------------
void testApp::draw(){
    
	myDrawFrame.draw();
	
	if (randBack) {
		ofSetColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));
		cout << "Random!!!";
	}
	else {
		if (blackBack){
            ofSetColor(255, 255, 255);
		}
		else {
            ofSetColor(0, 0, 0);
		}
	}
    
	ofFill();
	for(int x=0;x<4;x++){
		for(int y=0;y<10;y++){
			if(square1[x][y]){
				ofRect(x*200, y*80, 20, 20);
			}
			if(square2[x][y]){
				ofRect((x*200)+20, y*80, 20, 20);
			}
			if(square3[x][y]){
				ofRect((x*200)+40, y*80, 20, 20);
			}
			if(square4[x][y]){
				ofRect((x*200)+60, y*80, 20, 20);
			}
			if(square5[x][y]){
				ofRect((x*200)+80, y*80, 20, 20);
			}
			if(square6[x][y]){
				ofRect((x*200)+100, y*80, 20, 20);
			}
			if(square7[x][y]){
				ofRect((x*200)+120, y*80, 20, 20);
			}
			if(square8[x][y]){
				ofRect((x*200)+140, y*80, 20, 20);
			}
			if(square9[x][y]){
				ofRect((x*200)+160, y*80, 20, 20);
			}
			if(square0[x][y]){
				ofRect((x*200)+180, y*80, 20, 20);
			}
			if(squareQ[x][y]){
				ofRect(x*200, (y*80)+20, 20, 20);
			}
			if(squareW[x][y]){
				ofRect((x*200)+20, (y*80)+20, 20, 20);
			}
			if(squareE[x][y]){
				ofRect((x*200)+40, (y*80)+20, 20, 20);
			}
			if(squareR[x][y]){
				ofRect((x*200)+60, (y*80)+20, 20, 20);
			}
			if(squareT[x][y]){
				ofRect((x*200)+80, (y*80)+20, 20, 20);
			}
			if(squareY[x][y]){
				ofRect((x*200)+100, (y*80)+20, 20, 20);
			}
			if(squareU[x][y]){
				ofRect((x*200)+120, (y*80)+20, 20, 20);
			}
			if(squareI[x][y]){
				ofRect((x*200)+140, (y*80)+20, 20, 20);
			}
			if(squareO[x][y]){
				ofRect((x*200)+160, (y*80)+20, 20, 20);
			}
			if(squareP[x][y]){
				ofRect((x*200)+180, (y*80)+20, 20, 20);
			}
			if(squareA[x][y]){
				ofRect(x*200, (y*80)+40, 20, 20);
			}
			if(squareS[x][y]){
				ofRect((x*200)+20, (y*80)+40, 20, 20);
			}
			if(squareD[x][y]){
				ofRect((x*200)+40, (y*80)+40, 20, 20);
			}
			if(squareF[x][y]){
				ofRect((x*200)+60, (y*80)+40, 20, 20);
			}
			if(squareG[x][y]){
				ofRect((x*200)+80, (y*80)+40, 20, 20);
			}
			if(squareH[x][y]){
				ofRect((x*200)+100, (y*80)+40, 20, 20);
			}
			if(squareJ[x][y]){
				ofRect((x*200)+120, (y*80)+40, 20, 20);
			}
			if(squareK[x][y]){
				ofRect((x*200)+140, (y*80)+40, 20, 20);
			}
			if(squareL[x][y]){
				ofRect((x*200)+160, (y*80)+40, 20, 20);
			}
			if(squareSEM[x][y]){
				ofRect((x*200)+180, (y*80)+40, 20, 20);
			}
			if(squareZ[x][y]){
				ofRect(x*200, (y*80)+60, 20, 20);
			}
			if(squareX[x][y]){
				ofRect((x*200)+20, (y*80)+60, 20, 20);
			}
			if(squareC[x][y]){
				ofRect((x*200)+40, (y*80)+60, 20, 20);
			}
			if(squareV[x][y]){
				ofRect((x*200)+60, (y*80)+60, 20, 20);
			}
			if(squareB[x][y]){
				ofRect((x*200)+80, (y*80)+60, 20, 20);
			}
			if(squareN[x][y]){
				ofRect((x*200)+100, (y*80)+60, 20, 20);
			}
			if(squareM[x][y]){
				ofRect((x*200)+120, (y*80)+60, 20, 20);
			}
			if(squareCOMMA[x][y]){
				ofRect((x*200)+140, (y*80)+60, 20, 20);
			}
			if(squareSTOP[x][y]){
				ofRect((x*200)+160, (y*80)+60, 20, 20);
			}
			if(squareSLASH[x][y]){
				ofRect((x*200)+180, (y*80)+60, 20, 20);
			}
		}
	}
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    if (key == OF_KEY_RETURN) {
		randBack =! randBack;
	}
	
	if (key == OF_KEY_F1) {
		blackBack =! blackBack;
	}
	
	if (key == OF_KEY_BACKSPACE) {
		resetSequencer();
	}
    
	if (key == OF_KEY_LEFT) {
		if (myDrawFrame.posX > 0) {
			myDrawFrame.posX = myDrawFrame.posX - 200;
			myDrawFrame.grid = myDrawFrame.grid - 200;
			//cout << myDrawFrame.posX;
		}
	}
	if (key == OF_KEY_RIGHT) {
		if (myDrawFrame.posX < (ofGetWidth() - 200)) {
			myDrawFrame.posX = myDrawFrame.posX + 200;
			myDrawFrame.grid = myDrawFrame.grid + 200;
			//cout << myDrawFrame.posX;
		}
	}
	if (key == OF_KEY_UP) {
		if (myDrawFrame.posY > 0) {
			myDrawFrame.posY = myDrawFrame.posY - 80;
			myDrawFrame.grid = myDrawFrame.grid - 80;
			//cout << myDrawFrame.posY;
		}
	}
	if (key == OF_KEY_DOWN) {
		if (myDrawFrame.posY < (ofGetHeight() - 80)) {
			myDrawFrame.posY = myDrawFrame.posY + 80;
			myDrawFrame.grid = myDrawFrame.grid + 80;
			//cout << myDrawFrame.posY;
		}
	}
	if (key == '1') {
		setVal = !square1[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square1[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '2') {
		setVal = !square2[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square2[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '3') {
		setVal = !square3[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square3[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '4') {
		setVal = !square4[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square4[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '5') {
		setVal = !square5[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square5[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '6') {
		setVal = !square6[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square6[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '7') {
		setVal = !square7[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square7[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '8') {
		setVal = !square8[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square8[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '9') {
		setVal = !square9[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square9[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '0') {
		setVal = !square0[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		square0[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'q') {
		setVal = !squareQ[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareQ[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'w') {
		setVal = !squareW[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareW[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'e') {
		setVal = !squareE[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareE[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'r') {
		setVal = !squareR[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareR[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 't') {
		setVal = !squareT[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareT[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'y') {
		setVal = !squareY[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareY[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'u') {
		setVal = !squareU[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareU[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'i') {
		setVal = !squareI[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareI[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'o') {
		setVal = !squareO[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareO[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'p') {
		setVal = !squareP[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareP[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'a') {
		setVal = !squareA[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareA[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 's') {
		setVal = !squareS[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareS[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'd') {
		setVal = !squareD[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareD[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'f') {
		setVal = !squareF[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareF[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'g') {
		setVal = !squareG[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareG[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'h') {
		setVal = !squareH[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareH[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'j') {
		setVal = !squareJ[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareJ[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'k') {
		setVal = !squareK[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareK[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'l') {
		setVal = !squareL[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareL[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == ';') {
		setVal = !squareSEM[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareSEM[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'z') {
		setVal = !squareZ[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareZ[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'x') {
		setVal = !squareX[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareX[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'c') {
		setVal = !squareC[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareC[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'v') {
		setVal = !squareV[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareV[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'b') {
		setVal = !squareB[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareB[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'n') {
		setVal = !squareN[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareN[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == 'm') {
		setVal = !squareM[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareM[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == ',') {
		setVal = !squareCOMMA[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareCOMMA[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '.') {
		setVal = !squareSTOP[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareSTOP[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
	if (key == '/') {
		setVal = !squareSLASH[myDrawFrame.posX/200][myDrawFrame.posY/80]; //store whether we are adding or erasing notes
		squareSLASH[myDrawFrame.posX/200][myDrawFrame.posY/80] = setVal; //set the value of the note we've clicked on to 'setVal'
	}
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}