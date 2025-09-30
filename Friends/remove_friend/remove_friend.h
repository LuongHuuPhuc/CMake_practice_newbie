#ifndef REMOVE_FRIEND_H
#define REMOVE_FRIEND_H

//Neu viet bang C ma link voi chuong trinh bang C++ thi phai dung macro o duoi:

#ifdef __cplusplus
extern "C" {
#endif 

void hello_world(void);

#ifdef __cplusplus 
}
#endif 

#endif //REMOVE_FRIEND_H