#include "Startmenu.h"
#include<iostream>

Account Startmenu::accountLogin()
{
	Login login;
	login.account;
}

Account Startmenu::accountSignup()
{
	Signup signup;
	signup.account;
}

Startmenu::Startmenu()
{
}

Startmenu::~Startmenu()
{
}

void Startmenu::chooseOptions()
{
	int choice;
	std::cout << "Welcome! What do you want to do?" << "\n"
		<< "[1]Login" << "\n"
		<< "[2]Sign up" << "\n"
		<< "Please enter the number of the option you want to do!" << std::endl;
	std::cin >> choice;

	switch (choice)
	{
	case LOGIN:
		accountLogin();
		break;
	case SIGNUP:
		accountSignup();
		break;
	default:
		std::cout << "No such option!" << std::endl;
		break;
	}
}
