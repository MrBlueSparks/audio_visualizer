#include <emscripten.h>

extern "C" {
EMSCRIPTEN_KEEPALIVE

int squareNum(int n) { return n * n; }
}
