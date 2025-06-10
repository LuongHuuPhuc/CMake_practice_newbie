#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "id_check.h"
#include "AverageScore.h"

int main(void){
  int n;
  printf("Enter number of student want to get info: ");
  scanf("%d", &n);

  Student_t *student = (Student_t*)malloc(n * sizeof(Student_t));
  if(!student){
    printf("Memory allocate failed !");
    return -1;
  } 

  do{
    input_students(student, n); 
    if(n > 0){
      break;
    }else{
      printf("Can not compute average GPA of class ! number is invalid...");
    }
  } while(n <= 0);

  printf("\nAverage GPA of %d students: %.2f", n, compute_class_avg(student, n));
  print_students(student, n);

  free(student);
  return 0;
}