#include "../include/player.h"
#include "../include/raylib.h"
#include "../include/utils.h"

constexpr float gravity = -9.8f;

int main(void) {

  //--------------------------------------------------------------------
  // Initialization
  const int screenWidth = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Game Window");

  int frameCounter = 0;
  SetTargetFPS(60);

  Player player;
  //--------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose()) {

    setFocus();
    // update var

    // draw
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawRectangle(120, 120, player.getSize(true), player.getSize(false), RED);

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
