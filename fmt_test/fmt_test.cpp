#include "fmt/core.h"
#include "remove_friend.h"

int main(void){
  hello_world();
  fmt::print("\nHello, {}!\n", "world");
  return 0;
}
