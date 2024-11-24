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
  //--------------------------------------------------------------------

  setFocus();

  // Main game loop
  while (!WindowShouldClose()) {
    // update var

    /* Player movement */
    if (IsKeyDown(KEY_A)) {
      player.updateVelo({MOVESPEED, 0});
    } else if (IsKeyDown(KEY_D)) {
      player.updateVelo({-MOVESPEED, 0});
    } else {
      player.updateVelo({0, 0});
    }
    if (IsKeyDown(KEY_W)) {
      player.updateVelo({0, -MOVESPEED}); // inverted since its relative to
                                          // pixel co-ordinate space
    } else if (IsKeyDown(KEY_S)) {
      player.updateVelo({0, MOVESPEED});
    } else {
      player.updateVelo({0, 0});
    }
    player.movePos();

    // draw
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawRectangle(player.getPosX(), player.getPosY(), player.getSize(true),
                  player.getSize(false), RED);

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
