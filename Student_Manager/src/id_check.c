#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "id_check.h"

int is_id_valid(Student_t *s){
  return s->id > 0;
}

void id_strlen_check(Student_t *s){
  char buffer[10];

  while(1){
    printf("Enter ID (4-digits): ");
    scanf("%d", buffer);
    
    //Kiem tra do dai dung 4 ky tu va toan la ky tu so
    int valid = strlen(buffer) == 4;
    for(int i = 0; i < 4 && valid; i++){
      if(!isdigit(buffer[i])){ //Tra ve true neu buffer la so, false(0) neu khong phai chu so
        valid = 0;
      }
    }
    if(valid){
      s->id = atoi(buffer); //Neu chuoi cho vao atoi khong bat dau bang so, no se tra ve 0 
      break;
    }else{
      printf("Invalid ID ! Please enter a 4-digits number\n");
    }
  }
}