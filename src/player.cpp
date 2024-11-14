#include "../include/player.h"

// constructor
Player::Player() : playerSize({10, 20}), pos({0, 0}), velo({0, 0}) {}

Player::Player(const std::array<float, 2> &position,
               const std::array<float, 2> &velocity)
    : pos(position), velo(velocity), playerSize({10, 20}) {}

std::array<float, 2> Player::getPos() { return pos; }
std::array<float, 2> Player::getVelo() { return velo; }

void Player::printPos() {
  std::cout << "pos: " << pos[0] << "," << pos[1] << '\n';
}
void Player::printVelo() {
  std::cout << "velo: " << velo[0] << "," << pos[1] << '\n';
}

void Player::updatePos(const float x, const float y) {
  pos[0] = x;
  pos[1] = y;
}
void Player::updateVelo(const float xv, const float yv) {
  velo[0] = xv;
  velo[1] = yv;
}
void Player::movePos() {
  pos[0] += velo[0];
  pos[1] += velo[1];
}
