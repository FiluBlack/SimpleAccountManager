#include "Signup.h"
#include<iostream>

Signup::Signup()
{
	Email email = inputEmail();
	Username username = inputUsername();
	Password password = inputPassword();
	newAccount = Account(email, username, password);
}

Signup::~Signup()
{
}

Account Signup::getAccount()
{
	return newAccount;
}

Email Signup::inputEmail()
{
	char email;
	while (true)
	{
		std::cout << "Email: ";
		std::cin >> email;
		if (Email::exist(email)) std::cout << "Email already exist!" << std::endl;
		else if (!Email::isValid(email)) std::cout << "Email is not valid!" << std::endl;
		else { Email em = email; return em; }
	}
}

Username Signup::inputUsername()
{
	char username;
	while (true)
	{
		std::cout << "Username: ";
		std::cin >> username;
		if (Username::exist(username)) std::cout << "Username already exist!" << std::endl;
		else if (!Username::isValid(username)) std::cout << "Username is not valid!" << std::endl;
		else { Username un = username; return un; }
	}
}

Password Signup::inputPassword()
{
	char password;
	while (true)
	{
		std::cout << "Password: ";
		std::cin >> password;
		if (!Password::isValid(password)) std::cout << "Password is not valid!" << std::endl;
		else { Password pw = password; return pw; }
	}
}
