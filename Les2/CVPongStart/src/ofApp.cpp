#include "ofApp.h"

void ofApp::setup() {
    ofSetBackgroundColor(ofColor::black);
    ofSetCircleResolution(30);
    ball.reset();
}

void ofApp::update() {
    bool wasReset = ball.update(mouseY);
    if (wasReset) {
        missedCount++;
    }
}

void ofApp::draw() {
    ball.draw();

    ofDrawRectangle(ofGetWidth() - PADDLE_WIDTH,
                    MIN(MAX(mouseY - PADDLE_HEIGHT / 2, 0), ofGetHeight() - PADDLE_HEIGHT),
                    PADDLE_WIDTH, PADDLE_HEIGHT);

    ofDrawBitmapString("Missed: " + ofToString(missedCount), 10, 10);
}

void ofApp::keyPressed(int key) {

}

void ofApp::mousePressed(int x, int y, int button) {

}
