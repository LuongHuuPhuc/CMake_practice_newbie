#include "AverageScore.h"

float compute_class_avg(Student_t *s, int n){
  float sum = 0.0f;
  for(int i = 0; i < n; i++){
    sum += s[i].gpa;
  }
  return (n > 0) ? (sum / n) : 0;
}