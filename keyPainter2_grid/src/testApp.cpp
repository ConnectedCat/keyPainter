#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	
	ofBackground(255, 255, 255);
	ofSetWindowTitle("paint with your keyboard!!!");
	cout << "Hello!";
	
	keyZ = false;
	keyX = false;
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
	
	myDrawFrame.draw();
	

	
	if (keyZ == true) {
		ofSetColor(0, 0, 0);
		ofFill(); 
		ofRect(myDrawFrame.posX, (myDrawFrame.posY+60), 20, 20);
		cout << "paint it back!!!";
	}
	if (keyX == true) {
		ofSetColor(0, 0, 0);
		ofFill(); 
		ofRect((myDrawFrame.posX+20), (myDrawFrame.posY+60), 20, 20);
		cout << "paint it back!!!";
	}
	
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
	
	myDrawFrame.keyPressed(key);
		
	if (key == OF_KEY_LEFT) {
		if (myDrawFrame.posX > 0) {
			myDrawFrame.posX = myDrawFrame.posX - 200;
			myDrawFrame.grid = myDrawFrame.grid - 200;
			cout << myDrawFrame.posX;
		}
	}
	if (key == OF_KEY_RIGHT) {
		if (myDrawFrame.posX < (ofGetWidth() - 200)) {
			myDrawFrame.posX = myDrawFrame.posX + 200;
			myDrawFrame.grid = myDrawFrame.grid + 200;
			cout << myDrawFrame.posX;
		}
	}
	if (key == OF_KEY_UP) {
		if (myDrawFrame.posY > 0) {
			myDrawFrame.posY = myDrawFrame.posY - 80;
			myDrawFrame.grid = myDrawFrame.grid - 80;
			cout << myDrawFrame.posY;
		}
	}
	if (key == OF_KEY_DOWN) {
		if (myDrawFrame.posY < (ofGetHeight() - 80)) {
			myDrawFrame.posY = myDrawFrame.posY + 80;
			myDrawFrame.grid = myDrawFrame.grid + 80;
			cout << myDrawFrame.posY;
		}
	}
	
	if (key == 'z' || key == 'Z') {
		keyZ = !keyZ;
	}
	if (key == 'x' || key == 'X') {
		keyX = !keyX;
	}
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

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

