#include "String.h"
#include <iostream>

String::String() : string(nullptr) {
	lenght = 0;
}

String::String(const char* str) {
	if (str == nullptr) {
		string = nullptr;
		lenght = 0;
	}
	else {
		lenght = strlen(str);
		string = new char[lenght + 1];
		strcpy_s(string, lenght + 1, str);
	}
	
}

String::String(const String& other) : lenght(other.lenght){
	if (other.string != nullptr) {
		string = new char[strlen(other.string) + 1];
		strcpy_s(string, strlen(other.string) + 1, other.string);
	}
	else {
		string = nullptr;
	}
}

String::~String() {
	if (string != nullptr) {
		delete[] string;
	}
}

