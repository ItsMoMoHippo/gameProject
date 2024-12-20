#include <cstddef>
#ifndef PLAYER_H
#define PLAYER_H()

#include "../include/utils.h"
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

  /* return position as float
   * takes enum for axis */
  const float &getPos(const Axis axis) const;
  /* return velocity as float
   * takes enum for axis */
  const float &getVelo(const Axis axis) const;
  /* returns size of player
   * takes enum for axis */
  const int &getSize(const Axis axis) const;

  /* prints player position to the console */
  const void printPos();
  /* prints player velocity to the console */
  const void printVelo();

  /* updates the player position
   * has nothing to do with player velocity
   * takes float array for x and y pos */
  void updatePos(const std::array<float, 2> &);
  /* updates the player velocity
   * takes enum for axis */
  void updateVelo(const Axis axis, const float &);
  /* updates player position due to player velocity */
  void movePos();
  /* clears  player's velocity */
  void resetVelocity();
  /* applies gravity */
  void applyGravity(const float &);
  /* returns bottom of player, for collision purposes */
};

#endif // !PLAYER_H
