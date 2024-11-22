#include "../include/player.h"
#include <array>

constexpr int playerWidth = 30;
constexpr int playerHeight = 60;

Player::Player()
    : playerSize({playerWidth, playerHeight}), pos({0, 0}), velo({0, 0}) {}

Player::Player(const std::array<float, 2> &position,
               const std::array<float, 2> &velocity)
    : pos(position), velo(velocity), playerSize({playerWidth, playerHeight}) {}

const std::array<float, 2> &Player::getPos() { return pos; }
const std::array<float, 2> &Player::getVelo() { return velo; }
const int Player::getSize(bool x) {
  if (x) {
    return playerWidth;
  } else {
    return playerHeight;
  }
}

const void Player::printPos() {
  std::cout << "pos: " << pos[0] << "," << pos[1] << '\n';
}
const void Player::printVelo() {
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
void Player::getBottom() {}
