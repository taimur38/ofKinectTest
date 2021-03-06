#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	kinect.initSensor();
	kinect.initColorStream(true);
	kinect.initDepthStream(true);
	kinect.initBodyIndexStream();
	kinect.initSkeletonStream(true);

	kinect.start();
}

//--------------------------------------------------------------
void ofApp::update(){
	kinect.update();

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofBackground(0, 255);
	kinect.draw(0, 0);
	kinect.drawDepth(0, ofGetHeight() - 424);
	kinect.drawBodyIndex(512, ofGetHeight() - 424);
	kinect.drawAllSkeletons(ofVec2f(640, 480));
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
