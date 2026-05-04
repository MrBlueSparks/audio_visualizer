#include <emscripten.h>

extern "C"{
  EMSCRIPTTEN_KEEPALIVE 
  int squareNum(int n){
      return n * n;
  }

}
int main() {
  

}


