#include "../include/player.h"
#include <array>

constexpr int playerWidth = 30;
constexpr int playerHeight = 60;

Player::Player()
    : playerSize({playerWidth, playerHeight}), pos({0, 0}), velo({0, 0}) {}

Player::Player(const std::array<float, 2> &position,
               const std::array<float, 2> &velocity)
    : pos(position), velo(velocity), playerSize({playerWidth, playerHeight}) {}

const float &Player::getPos(const Axis axis) const {
  return pos[static_cast<int>(axis)];
}
const float &Player::getVelo(const Axis axis) const {
  return pos[static_cast<int>(axis)];
}
const int &Player::getSize(const Axis axis) const {
  return playerSize[static_cast<int>(axis)];
}

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
void Player::updateVelo(const Axis axis, const float &a) {
  velo[static_cast<int>(axis)] += a;
}
void Player::movePos() {
  pos[0] += velo[0];
  pos[1] += velo[1];
}
void Player::resetVelocity() { velo.fill(0); }
void Player::applyGravity(const float &a) { velo[1] += a; }
