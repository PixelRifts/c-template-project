#include "defines.h"
#include "os/os.h"
#include "os/window.h"
#include "os/input.h"
#include "base/tctx.h"
#include "core/backend.h"
#include "core/resources.h"
#include "opt/render_2d.h"

#include "chip8.h"

int main(int argc, char **argv) {
  OS_Init();
  ThreadContext context = {0};
  tctx_init(&context);
  M_Arena global_arena;
  arena_init(&global_arena);
  U_FrameArenaInit();
  
  
  
  U_FrameArenaFree();
  arena_free(&global_arena);
  tctx_free(&context);
}
