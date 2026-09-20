#include <iostream>
#include "String.h"

int main()
{
	String str1("Hello, World!");
	String str2(str1);

	std::cout << "String 1: " << str1.c_str() << std::endl;
}
