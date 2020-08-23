#pragma once
#include<iostream>

class Password
{
private:
	char hashedPassword;

	static char hashPassword(char password);
public:
	Password(char passwordChar);
	~Password();

	static bool isValid(char password);
	bool isCorrectPassword(char password);

	Password& operator=(const char &assignedPasword);
};

