#include "../include/platform.h"
#include "../include/player.h"
#include "../include/raylib.h"
#include "../include/utils.h"

#define GRAVITY 9.8
#define MOVESPEED 3.0
constexpr float jumpSpeed = 10.0f;

int main(void) {

  //--------------------------------------------------------------------
  // Initialization
  const int screenWidth = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Game Window");

  int frameCounter = 0;
  SetTargetFPS(60);

  Player player({120, 120}, {0, 0});
  Platform platform({70, 30}, {120, 200});
  //--------------------------------------------------------------------

  setFocus();

  // Main game loop
  while (!WindowShouldClose()) {
    // update var

    /* Player movement */
    player.resetVelocity();
    if (IsKeyDown(KEY_A)) {
      player.updateVelo(Axis::X, -MOVESPEED);
    } else if (IsKeyDown(KEY_D)) {
      player.updateVelo(Axis::X, MOVESPEED);
    } else {
      player.updateVelo(Axis::X, 0);
    }
    if (IsKeyDown(KEY_W)) {
      player.updateVelo(Axis::Y, -MOVESPEED); // uses pixel coord system
    } else if (IsKeyDown(KEY_S)) {
      player.updateVelo(Axis::Y, MOVESPEED);
    } else {
      player.updateVelo(Axis::Y, 0);
    }
    // player.applyGravity(GRAVITY);
    player.movePos();

    // draw
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawRectangle(player.getPos(Axis::X), player.getPos(Axis::Y),
                  player.getSize(Axis::X), player.getSize(Axis::Y), RED);

    EndDrawing();
    //-----------------------------------------------------------------
  }

  //-------------------------------------------------------------------
  // de-initialise

  // todo: unload data
  CloseWindow();
  //-------------------------------------------------------------------

  return 0;
}
