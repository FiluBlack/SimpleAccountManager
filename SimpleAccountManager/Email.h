#pragma once
class Email
{
private:
	char email;

public:
	Email(char emailChar);
	~Email();

	static bool exist(char email);
	static bool isValid(char email);

	Email& operator=(const char& assignedEmail);
};

