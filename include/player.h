#pragma once

#include <iostream>

class Player {
private:
  int xpos;
  int ypos;
  int xvelo;
  int yvelo;

public:
  Player();
  Player(float xp, float yp, float xv, float yv);

  void printPos();
  void printVelo();
  void printInfo();

  float getxPos();
  float getyPos();
  float getxVelo();
  float getyVelo();

  void changePos(float, float);
  void changeVelo(float, float);
};
