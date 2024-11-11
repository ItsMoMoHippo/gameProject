#include <iostream>

class Player {
  int xPos, yPos, xSpeed, ySpeed;

  Player() {
    xPos = 0;
    yPos = 0;
    xSpeed = 0;
    ySpeed = 0;
  }
  Player(int xp, int yp, int xs, int ys) {
    xPos = xp;
    yPos = yp;
    xSpeed = xs;
    ySpeed = ys;
  }

public:
  const int getXPos() { return xPos; };
  const int getYPos() { return yPos; };
  const int getXSpeed() { return xSpeed; };
  const int getYSpeed() { return ySpeed; };

  void setXPos(int x) { xPos = x; };
  void setYPos(int y) { yPos = y; };

  void printInfo() {
    std::cout << "xPos: " << xPos << '\n'
              << "yPos: " << yPos << '\n'
              << "xSpeed: " << xSpeed << '\n'
              << "ySpeed: " << ySpeed << '\n'
              << std::endl;
  }
};
