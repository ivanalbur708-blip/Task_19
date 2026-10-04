#include <iostream>
#include "String.h"

int main()
{
	String str1("Hello, World!");
	String str2(str1);

	String str3("Yorik");



	str3 = str1;

	//str3[0] = 'B';

	std::cout << "String 1: " << str1.c_str() << '\n';

	std::cout << str3.c_str() << '\n';
}
