#include "../include/utils.h"

void setFocus() {
  if (!IsWindowFocused()) {
    SetWindowFocused();
  }
}
