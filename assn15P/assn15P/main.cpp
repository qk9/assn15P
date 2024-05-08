/* name: Iain Rogers
*  class: CS 10B
*  date: 5/8/2024
*  instructor: Dave Harden
*  filename: main.cpp
*  description: ReverseInBounds works as designed. Need to implement ReverseCString.
*/

#include <cstdlib>
#include <cstring>
#include <iostream>
#include<time.h>

void ReverseInBounds(char myStr[], int start, int end);

void ReverseCString(char* myStr[]);

int main() {
	srand(static_cast<unsigned>(time(nullptr)));
	int len = rand() % 20 + 1;
	char* foo = new char[len];
	for (int i = 0; i < len - 1; i++) {
		foo[i] = rand() % 26 + 65;
	}
	foo[len - 1] = '\0';
	std::cout << "Before reversing, foo is:" << std::endl;
	std::cout << foo << std::endl << std::endl;
	ReverseInBounds(foo, 0, len - 2);
	std::cout << "After reversing, foo is:" << std::endl;
	std::cout << foo << std::endl;
}






void ReverseInBounds(char myStr[], int start, int end) {

	char temp; // to be used for position swaps

	if(end > start) {
		temp = myStr[end];
		myStr[end] = myStr[start];
		myStr[start] = temp;
		ReverseInBounds(myStr, start + 1, end - 1);
	}
}






void ReverseCString(char* myStr[]) {
	// tbd
}