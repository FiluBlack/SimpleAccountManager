#include "Password.h"

char Password::hashPassword(char password)
{
	char hashedPassword = password;
	return hashedPassword;
}

Password::Password(char passwordChar)
{
	if (isValid(passwordChar))
	{
	 hashedPassword = hashPassword(passwordChar);
	}
	else
	{
		std::cout << "Password is not valid!" << std::endl;
		this->~Password();
	}
}

Password::~Password()
{
}

bool Password::isValid(char password)
{
	return true;
}

bool Password::isCorrectPassword(char password)
{
	if (hashedPassword == hashPassword(password)) return true;
	return false;
}

Password& Password::operator=(const char& assignedPasword)
{
	if (isValid(assignedPasword))
	{
		hashedPassword = hashPassword(assignedPasword);
		return *this;
	}
}
