#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofBackground(234, 214, 66);
    ofBackground(0,0,0);
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor colorOne(251,209,210);
    ofColor colorTwo(151,172,215);

    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_LINEAR);
    
    ofSetColor(r,g,b);
    for(int i=0; i<1800;i++){
        if(i%20 == 0){
            ofDrawRectangle(i, 0, 5, 800);
        }
    }
    
    ofFill();
    ofSetColor(151,172,215);
    ofDrawCircle(680, 370, 330);
    
    
    ofSetColor(156,123,176);
    ofDrawCircle(80, 650, 230);
    ofEnableAlphaBlending();
    ofSetColor(156,123,176,127);
    ofDrawCircle(290, 220, 130);
    
    for(int i=1; i<=30;i++){
        ofSetColor(251, 252, 220);
        ofDrawLine(40+i, 440, 230, 190);
        if (i<10){
            ofDrawLine(105, 400, 250, 190+i);
        }
    }
    
    ofDrawLine(130, 450, 530, 550);
    
    ofDrawLine(130, 150, 500, 500);
    
    
    ofNoFill();
    for(int i=1; i<=30;i++){
    ofDrawBezier(50, 80, 125, 130-i, 175, 130-i, 250, 80);
    }
    
    ofDrawBezier(1080, 60, 800, 30, 800, 300, 800, 300);
    
    ofDrawCurve(-300, 300, 800, 300, 1000, 500, 2100, 500);
    
    ofDrawBezier(1000, 500, 1200,500,600,2900,1080,600);
    
    
    ofDrawEllipse(820, 220, 70, 35);
    ofDrawEllipse(950, 240, 80, 45);
    
   
    ofFill();
    ofSetColor(251,209,210,200);
    ofDrawTriangle(700, -100, 1000, 470, 500, 500);
    ofFill();
    ofDrawCircle(820, 220, 6);
    ofDrawCircle(950, 240, 6);
    ofDrawEllipse(840, 290, 30, 10);
    ofDrawEllipse(870, 290, 30, 10);
    
    ofDrawEllipse(980, 390, 80, 20);
    ofNoFill();
    ofDrawEllipse(410, 100, 200, 80);
    ofFill();
    ofDrawCircle(410, 100, 20);
    
 
    ofSetColor(169,83,98,240);
    
    ofDrawRectangle(500, 0, 50, 500);
    ofDrawRectangle(700,100,30,500);
    ofDrawTriangle(650,600,700,750,800,800);
    ofDrawRectangle(650, 600, 20, 180);
    ofDrawTriangle(450,600,500,750,600,800);
    ofDrawRectangle(450, 600, 20, 180);
    

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
    r=255;
    b=255;
    g=255;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    r=156;
    g=123;
    b=176;
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
