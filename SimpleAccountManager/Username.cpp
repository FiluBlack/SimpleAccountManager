#include "Username.h"

Username::Username(char usernameChar)
{
	username = usernameChar;
}

Username::~Username()
{
}

bool Username::exist(char username)
{
	return false;
}

bool Username::isValid(char username)
{
	return true;
}

Username& Username::operator=(char &assignedUsername)
{
	if (!exist(assignedUsername) && isValid(assignedUsername))
	{
		username = assignedUsername;
		return *this;
	}
}
