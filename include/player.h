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
  /* Empty constructor for player */
  Player();
  /* Constructor with full options */
  Player(const std::array<float, 2> &position,
         const std::array<float, 2> &velocity);

  /* return position as vector */
  const float &getPosX();
  const float &getPosY();
  /* return velocity as vector */
  const std::array<float, 2> &getVelo();
  /* returns size of player */
  const int getSize(bool);

  /* prints player position to the console */
  const void printPos();
  /* prints player velocity to the console */
  const void printVelo();

  /* updates the player position
   * has nothing to do with player velocity
   * takes float array for x and y pos */
  void updatePos(const std::array<float, 2> &);
  /* updates the player velocity
   * takes float array for x and y velocity */
  void updateVelo(const std::array<float, 2> &);
  /* updates player position due to player velocity */
  void movePos();
  /* returns bottom of player, for collision purposes */
  void getBottom();
};

#endif // !PLAYER_H
