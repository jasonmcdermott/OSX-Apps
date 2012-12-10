#pragma once


#include "ofMain.h"
#include "ofxVec3f.h"
#include "Boid.h"
#include "Boids.h"
//#include "ofxSimpleGuiToo.h"
#include <math.h>

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
    float nextTime, currTime, timeCounter, timeRemainder, D, x, y;
    int time;
    bool tick, on;
    
    Boids* boids;
    char mode;
    ofxVec3f target; // target used to seek, flee, arrive

    
};
