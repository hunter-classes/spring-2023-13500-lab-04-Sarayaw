#include <iostream>

int main() {
  int width, height;
  std::cout << "Enter width and height of the box: \n";
  std::cin >> width >> height;

  std::cout << std::endl;
  std::cout << "Shape: \n";
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
