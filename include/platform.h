#ifndef PLATFORM_H
#define PLATFORM_H

#include "../include/utils.h"
#include <array>

class Platform {
public:
private:
  std::array<int, 2> size;
  std::array<int, 2> pos;

public:
  /* Basic constructor for Platform
   * @param = 4 ints for sizeX sizeY, posX posY*/
  Platform(const std::array<int, 2> &size, const std::array<int, 2> &position);

  /* returns the size */
  const int &getSize(const Axis axis) const;
  /* returns the position, based on inputted enum */
  const int &getPos(const Axis axis) const;
};

#endif // !PLATFORM_H
