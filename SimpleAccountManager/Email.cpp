#include "Email.h"

Email::Email(char emailChar)
{
	email = emailChar;
}

Email::~Email()
{
}

bool Email::exist(Email email)
{
	return false;
}

bool Email::isValid(Email email)
{
	return true;
}

Email& Email::operator=(const char &assignedEmail)
{
	if (!exist && isValid)
	{
		email = assignedEmail;
		return *this;
	}


	// TODO: hier return-Anweisung eingeben
}
