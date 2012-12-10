#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    on = true;    
    boids = new Boids(20);
    D = 0.7;
    timeCounter = D;
    time = 1;
    x = 100;
    y = 300;
    tick = false;

}

//--------------------------------------------------------------
void testApp::update(){
   
    
    
    timeCounter = timeCounter + D;
    if (timeCounter > 1){
    
        if (on == true){
            boids->flock();
            if (mode == 'a') {
                boids->arrive(target);
            }
            else if (mode == 'f') {
                boids->flee(target);
            }
            else if (mode == 'e') {
                boids->explode();
                mode = 0;
            }
            boids->update();
            boids->bounce();
        }
        
        tick = true;
        timeCounter = D;
    }
}

//--------------------------------------------------------------
void testApp::draw(){
    if (tick == true){
        x ++;
        tick = false;
    }
    boids->draw();
    ofRect(x,y,10,10);
    string  info  = "FPS:        "+ofToString(ofGetFrameRate(),0)+"\n";
    info += "D: "+ofToString(D, 5)+"\n";
    ofSetColor(0);
    ofDrawBitmapString(info, 20, 20);
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
    D = ofMap(x,0,1024,0,1);
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