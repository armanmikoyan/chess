#include "functions.hpp"
#include <iostream>

void render_table() {
  for (int row = 0; row < 9; ++row) {
     int num = 8 - row;
    if (row == 0) {
	std::cout << "                     ";
      for (int alf = 0; alf < 8; ++alf) {
        char ch = 'a' + alf;
        std::cout << "   " << ch << "  ";

        if (alf == 7) {
          std::cout << std::endl;
        }
      }
    }
	std::cout << "                     ";
    for (int col1 = 0; col1 < 9; ++col1) {
      if (col1 != 8) {
        std::cout << "+ - - ";
      } else {
        std::cout << "+";
      }
    }
    std::cout << std::endl;
    if (row != 8) {
	std::cout << "                   " << num << " " ;
      for (int col2 = 0; col2 < 9; ++col2) {
		if(col2 !=8){
        std::cout << "|     ";
}else{
	std::cout << "| " << num;
}
      }
    }
    if (row == 8) {
	std::cout << "                     ";
      for (int alf = 0; alf < 8; ++alf) {
        char ch = 'a' + alf;
        std::cout << "   " << ch << "  ";

        if (alf == 7) {
          std::cout << std::endl;
        }
      }
    }
    std::cout << std::endl;
  }

}