/**
 * @note Neu bi loi Cmake khong chay duoc hay set moi truong nhu duoi trong terminal
 * $env:CC="C:/msys64/ucrt64/bin/gcc.exe"
 * $env:CXX="C:/msys64/ucrt64/bin/g++.exe"
*/
#include <stdio.h>
#include "friend.h"
#include "gay.h"
#include "remove_friend.h"

int main(void){
  get_name();
  print_name();
  get_age();
  hello_world();
  return 0;
}