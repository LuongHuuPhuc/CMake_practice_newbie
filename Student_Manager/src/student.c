#include <stdio.h>
#include "student.h"
#include "id_check.h"

void print_student(const Student_t *s){
  printf("ID: %d\n", s->id);
  printf("Name: %s\n", s->name);
  printf("Age: %d\n", s->age);
  printf("GPA: %.2f\n", s->gpa);
  printf("Date of Birth (DOB): %02d/%02d/%04d\n", s->dob.day, s->dob.month, s->dob.year);
}

void input_student(Student_t *s){
  printf("Enter name: ");
  scanf(" %[^\n]", s->name); //s->name tro den vi tri dau tien trong mang name nen no da là dia chi roi, khong dùng &s->name vi no la dia chi cua toan bo mang

  // %[\n]: Cho phep nhap chuoi dau vao co ca khoang trang
  printf("Enter age: ");
  scanf("%d", &s->age); //Scanf luon can dia chi de no truyen gia tri vao

  // Gia tri hop le la 4 chu so 
  do{
    printf("Enter id (4-digits): ");
    scanf("%d", &s->id);
    if(s->id < 1000 || s->id > 9999){
      printf("Invalid ID ! Please enter a 4-digits number\n");
    }
  }while(s->id < 1000 || s->id > 9999);

  // id_strlen_check(&s);
  
  int status; 
  do{
    printf("Enter GPA (0.0 - 4.0): ");
    status = scanf("%f", &s->gpa);

    //Xoa bo dem neu nhap sai
    while(getchar() != '\n');

    if(status != 1 || s->gpa < 0.0 || s->gpa > 4.0){
      printf("Invalid GPA ! Please enter a number between 0.0 to 4.0\n");
    }
  }while(status != 1 || s->gpa < 0.0 || s->gpa > 4.0);

  printf("Enter Date of Birth (DOB): \n");
  printf("Day(dd): ");
  scanf("%d", &s->dob.day);
  printf("Month(mm): ");
  scanf("%d", &s->dob.month);
  printf("Year(yyyy): ");
  scanf("%d", &s->dob.year);

}

void print_students(const Student_t *s, int n){
  printf("\n====== Student List ======\n");
  for(int i = 0; i < n; i++){ 
    printf("\n----- Student %d -----\n", i + 1);   
    print_student(&s[i]);
  }
}

void input_students(Student_t *s, int n ){
  for(int i = 0; i < n; i++){
    printf("\n------ Enter Student %d ------\n", i + 1);
    input_student(&s[i]);
  }
}