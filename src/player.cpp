#include "../include/player.h"

Player::Player() {
  float xpos, ypos, xvelo, yvelo;
  xpos = ypos = xvelo = yvelo = 0;
}

Player::Player(float xp, float yp, float xv, float yv) {
  float xpos = xp;
  float ypos = yp;
  float xvelo = xv;
  float yvelo = yv;
}

void Player::printPos() {
  std::cout << "xpos: " << xpos << '\n' << "ypos: " << ypos << '\n' << '\n';
};
void Player::printVelo() {
  std::cout << "xvelo: " << xvelo << '\n' << "yvelo: " << yvelo << '\n' << '\n';
};
void Player::printInfo() {
  std::cout << "xpos: " << xpos << '\n'
            << "ypos: " << ypos << '\n'
            << "xvelo: " << xvelo << '\n'
            << "yvelo: " << yvelo << '\n'
            << '\n';
};

float Player::getxPos() { return xpos; };
float Player::getyPos() { return ypos; };
float Player::getxVelo() { return xvelo; };
float Player::getyVelo() { return yvelo; };

void Player::changePos(float xp, float yp) {
  xpos = xp;
  ypos = yp;
};
void Player::changeVelo(float xv, float yv) {
  xvelo += xv;
  yvelo += yv;
};
