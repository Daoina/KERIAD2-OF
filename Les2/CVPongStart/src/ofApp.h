#pragma once

#include "ofMain.h"
#include "Ball.h"


class ofApp : public ofBaseApp {

    public:
        void setup();

        void update();

        void draw();

        void keyPressed(int key);

        void mousePressed(int x, int y, int button);

        static const int PADDLE_WIDTH = 20;
        static const int PADDLE_HEIGHT = 150;

    private:
        Ball ball;
        int missedCount;
};
