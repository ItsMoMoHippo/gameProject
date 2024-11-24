#include "../include/platform.h"
#include <array>

Platform::Platform(const std::array<int, 2> &inSize,
                   const std::array<int, 2> &inPos)
    : size(inSize), pos(inPos) {}

const int &Platform::getSize(const Axis axis) const {
  return size[static_cast<int>(axis)];
}
const int &Platform::getPos(const Axis axis) const {
  return pos[static_cast<int>(axis)];
}
