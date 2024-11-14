#include <cstddef>
#ifndef PLAYER_H
#define PLAYER_H()

#include <array>
#include <iostream>

class Player {
private:
  std::array<float, 2> pos;
  std::array<float, 2> velo;
  const std::array<int, 2> playerSize;

public:
  Player();
  Player(const std::array<float, 2> &position,
         const std::array<float, 2> &velocity);

  std::array<float, 2> getPos();
  std::array<float, 2> getVelo();

  void printPos();
  void printVelo();

  void updatePos(const float, const float);
  void updateVelo(const float, const float);
  void movePos();
};

#endif // !PLAYER_H
