# Các thao tác cơ bản để biên dịch được chương trình C/C++ với CMake #
CMake là một công cụ build system generator. Nó giúp bạn quản lý quá trình biên dịch, liên kết và build phần mềm (thường dành cho C/C++) một cách linh hoạt và đa nền tảng 
#### **💡Quy trình hoạt động của CMake** ####
1. Bạn viết file `CMakeLists.txt`, mô tả:
   * Source code ở đâu
   * Thư viện cần link
   * File bạn muốn build ra
2. Chạy `cmake` -> sinh ra file build phù hợp cho hệ thống (Makefile, Visual Studio project,...)
3. Chạy `make`hoặc `cmake-build` để biên dịch. (Tùy môi trường trình biên dịch/ hệ điều hành bạn dùng sẽ thay đổi 1 chút cú pháp của make)
   > * Ví dụ như dùng trình biên dịch `ucrt64` hay `mingw64` của **msys2** thì lệnh cmake lại là `cmake .. -G "MinGW Makefiles"` và lệnh build chương trình sẽ là `mingw32-build`
   > * Còn đối với Linux/WSL/Ubuntu thì lệnh cmake mặc định sẽ là `cmake ..` và lệnh build là `make`
### **✅Cách viết file CMake cơ bản cho project chính và cách biên dịch/link với thư viện** ###
File CMake thường được để đặt với tên `CMakeLists.txt`
### **✅Cách viết file CMake cho project có thư viện là sub-directories trong project** ###

### **✅Cách viết file CMake và biên dịch/link cho project khác (không chứa thư viện đó)** ###
