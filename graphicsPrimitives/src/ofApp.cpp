#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
 
    for (int i=23; i<=178; i+=3) {
        if(i%2==0){
            ofLog(OF_LOG_NOTICE, "the number is " + ofToString(i));
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofSetColor(200, 0, 0);
    ofDrawBezier(10, 10, 100, 100, 40, 40, 60, 60);
    ofNoFill();
    
    ofDrawTriangle(50, 100, 80, 40, 100, 100);
    ofDrawCurve(390, 250, 60, 380, 100, 20, 65, 40);
    ofFill();
    ofDrawEllipse(60, 90, 50, 90);
    


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
