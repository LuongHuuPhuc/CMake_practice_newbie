#include <stdio.h>
#include "friend.h"

char char_buf[30];

void get_name(void){
  printf("Enter friend's name: ");
  fgets(char_buf, sizeof(char_buf), stdin); //Doc chuoi tu dau vao (tu dong them \0)

  //Xoa ky tu newline '\n' thu cong
  for(int i = 0; i < sizeof(char_buf); i++){
    if(char_buf[i] == '\n'){
      char_buf[i] == '\0';
      break;
    }
  }
}

void print_name(void){
  printf("Name is: %s\n", char_buf);
}