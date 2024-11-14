#include "../include/player.h"
#include "../include/raylib.h"

typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

void setfocus();

int main(void) {

  //--------------------------------------------------------------------
  // Initialization
  const int screenWidth = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Game Window");

  GameScreen currentScreen = LOGO;

  // initialise global variables and load data
  int frameCounter = 0;
  SetTargetFPS(60);
  //--------------------------------------------------------------------

  // Main game loop
  while (!WindowShouldClose()) {

    setfocus();
    //------------------------------------------------------------------
    // Update
    switch (currentScreen) {
    case LOGO:
      // todo: update logo screen variables here
      frameCounter++; // count frames
                      // after 2 seconds pass jump to title screen
      if (frameCounter > 120) {
        currentScreen = TITLE;
      }
      break;
    case TITLE:
      // todo: update title screen variable here

      // press enter to change to gameplay screen
      if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
        currentScreen = GAMEPLAY;
      }
      break;
    case GAMEPLAY:
      // todo: update gamplay screen variables here
      // press enter to change to ending screen
      if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
        currentScreen = ENDING;
      }
      break;
    case ENDING:
      // todo: update ending screen variables here

      // press enter to change to title screen
      if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP)) {
        currentScreen = TITLE;
      }
      break;
    default:
      break;
    }
    //-----------------------------------------------------------------

    //-----------------------------------------------------------------
    // draw
    BeginDrawing();

    ClearBackground(RAYWHITE);

    switch (currentScreen) {
    case LOGO:
      // todo: draw logo screen
      DrawText("Logo Screen", 20, 20, 40, LIGHTGRAY);
      DrawText("Wait for 2 seconds...", 290, 220, 20, GRAY);

      DrawRectangle(270, 270, 240, 40, {0, 0, 127, 50});
      DrawRectangle(270, 270, frameCounter * 2, 40, {0, 0, 255, 100});

      break;
    case TITLE:
      // todo: draw title screen
      DrawRectangle(0, 0, screenWidth, screenHeight, GREEN);
      DrawText("TITLE SCREEN", 20, 20, 40, DARKGREEN);
      DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20,
               DARKGREEN);
      break;
    case GAMEPLAY:
      // todo: draw gameplay screen
      DrawRectangle(0, 0, screenWidth, screenHeight, PURPLE);
      DrawText("GAMEPLAY SCREEN", 20, 20, 40, MAROON);
      DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20,
               MAROON);
      break;
    case ENDING:
      // todo: draw ending screen
      DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
      DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
      DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20,
               DARKBLUE);
      break;
    defualt:
      break;
    }

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

void setfocus() {
  if (!IsWindowFocused()) {
    SetWindowFocused();
  }
}
