#ifndef _STUDENT_H
#define _STUDENT_H

#define MAX_NAME 100

/**
 * union va struct giong nhau bao gom: 
 * - Deu la kieu du lieu ma nguoi dung tu dinh nghia nham phuc vu bai toan cu the
 * - Co cac thuoc tinh thanh phan
 * - Truy cap thuoc tinh thong qua toan tu '.' hoac toan tu '->' doi voi bien kieu con tro
 * Khac nhau:
 * | Struct | Union |
 * |--------|-------|
 * |Kich thuoc cua struct thuong lon hon hoac bang tong | Kich thuoc cua union bang voi kich thuoc cua |
 * |tat ca cac kich thuoc cua cac thuoc tinh thanh phan | thuoc tinh co kich thuoc lon nhat cua no     |
 * |--------------------------------------------------|--------------------------------------|
 * |Struct co the luu tru dong thoi nhieu gia tri cho | Chi co 1 thuoc tinh thanh phan union |
 * |cac thuoc tinh thanh phan o cung mot thoi diem    | co the luu gia tri tai 1 thoi diem   |
 * @note Tat cac cac bien thanh vien cua union dung chung bo nho, neu co bien co gia tri moi, bien cu se bi ghi de
 * 
*/

typedef struct _dob_type{
    int day;
    int month;
    int year;
} dob_t;

typedef struct _Student_type{
    char name[MAX_NAME];
    int id;
    int age;
    float gpa;
    dob_t dob;
} Student_t;

// Cac ham quan ly sinh vien 
void print_student(const Student_t *s);

void input_student(Student_t *s);

void print_students(const Student_t *s, int n);

void input_students(Student_t *s, int n);

#endif 
