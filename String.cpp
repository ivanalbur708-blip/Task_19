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

String& String::operator=(const String& other){
	if (this == &other) return *this;

	delete[] string;

	lenght = other.lenght;
	if (lenght > 0) {
		string = new char[lenght];
		for (int i = 0;i < lenght;++i) {
			string[i] = other.string[i];
		}
	}
	else {
		string = nullptr;
	}

	return *this;
}

char String::operator[](int index) const {
	if (index < 0 || index >= lenght) {
		throw std::out_of_range("Index out of range");
	}
	return string[index];
}

char& String::operator[](int index) {
	if (index < 0 || index >= lenght) {
		throw std::out_of_range("Index out of range");
	}
	return string[index];
}

