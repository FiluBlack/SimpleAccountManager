#include "Email.h"

Email::Email(char emailChar)
{
	email = emailChar;
}

Email::~Email()
{
}

bool Email::exist(char email)
{
	return false;
}

bool Email::isValid(char email)
{
	return true;
}

Email& Email::operator=(const char &assignedEmail)
{
	if (!exist(assignedEmail) && isValid(assignedEmail))
	{
		email = assignedEmail;
		return *this;
	}


	// TODO: hier return-Anweisung eingeben
}
