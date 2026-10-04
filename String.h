#pragma once
class String
{
private:
	char* string;
	int lenght;
public:
	String();

	String(const char* str);

	String(const String& other);

	~String();

	int GetLenght() const { return lenght; }

	const char* c_str() const { return string; }

	String& operator=(const String&);

	char operator[](int index) const;
	char& operator[](int index);
};

