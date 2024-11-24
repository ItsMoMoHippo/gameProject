#include "../include/player.h"
#include <array>

constexpr int playerWidth = 30;
constexpr int playerHeight = 60;

Player::Player()
    : playerSize({playerWidth, playerHeight}), pos({0, 0}), velo({0, 0}) {}

Player::Player(const std::array<float, 2> &position,
               const std::array<float, 2> &velocity)
    : pos(position), velo(velocity), playerSize({playerWidth, playerHeight}) {}

const float &Player::getPosX() { return pos[0]; }
const float &Player::getPosY() { return pos[1]; }
const std::array<float, 2> &Player::getVelo() { return velo; }
const int Player::getSize(bool x) { return x ? playerWidth : playerHeight; }

const void Player::printPos() {
  std::cout << "pos: " << pos[0] << "," << pos[1] << '\n';
}
const void Player::printVelo() {
  std::cout << "velo: " << velo[0] << "," << pos[1] << '\n';
}

void Player::updatePos(const std::array<float, 2> &a) {
  pos[0] = a[0];
  pos[1] = a[1];
}
void Player::updateVelo(const std::array<float, 2> &a) {
  velo[0] = a[0];
  velo[1] = a[1];
}
void Player::movePos() {
  pos[0] += velo[0];
  pos[1] += velo[1];
}
void Player::getBottom() {}
