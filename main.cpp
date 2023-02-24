#include <iostream>
#include "funcs.h"

// Task A

string box(int width, int height) {

// Create a string with enough spaces for the box
  string box = "";

  for (int j = 1; j <= height; j++) {
    for (int i = 1; i <= width; i++) {
      box = box + " ";
    }
    if (j != height) {
      box = box + "\n";
    }
  }

// Print the box
  return box;
}


// Task B
std::string checkerboard(int width, int height) {
	std::string output = "";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i % 2 == j % 2) {
				output += '*';
			} else {
				output += ' ';
			}
		}
		output += '\n';
	}
	return output;
}

// Task C
std::string cross(int size) {
	std::string output = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				output += '*';
			} else if (i + j == size - 1) {
				output += '*';
			} else {
				output += ' ';
			}
		}
		output += '\n';
	}
	return output;
}

// Task D
string lower(int length) {
	string output = "";
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < i; j++) {
			output += '*';
		}
		output += '\n';
	}
	return output;
}

// Task E
string upper(int length) {
	string output = "";
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			output += '*';
		}
		output += '\n';
	}
	return output;
}

//Task F
string trapezoid(int width, int height) {
	if (height > width) {
		cout << "Impossible shape!";
		return "";
	}
	string output = "";
	int spaces = 0;
	int stars = width;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || j == 0 || i == height - 1 || j == width - 1) {
				output += '*';
			} else {
				output += ' ';
			}
		}
		output += '\n';
		spaces += 1;
		stars -= 2;
	}
	return output;
}

//Task G
string checkerboard3x3(int width, int height) {
	if (width % 3 != 0 || height % 3 != 0) {
		cout << "Input width and height must be a multiple of 3.";
		return "";
	}
	string output = "";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				output += '*';
			} else {
				output += ' ';
			}
		}
		output += '\n';
	}
	return output;
}

