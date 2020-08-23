#pragma once
class Email
{
private:
	char email;

public:
	Email(char emailChar);
	~Email();

	static bool exist(Email email);
	static bool isValid(Email email);

	Email& operator=(const char& assignedEmail);
};

