#include <stdio.h>
#include "gay.h"

int how_old(int old){
  if(old >= 2){
    return (old - 2);
  }
  else return 0;
}

void get_age(void){
  static int old, two_ys_ago;
  printf("Enter your age: ");
  scanf("%d", &old);
  if(old < 2){
    printf("\nNot enough age !");
  }
  two_ys_ago = how_old(old);
  
  printf("\nYou are %d years old ! Your age 2 years ago is %d\n", old, two_ys_ago);
}