#include "Startmenu.h"
#include<iostream>

void Startmenu::login()
{
}

void Startmenu::signup()
{
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
		login();
		break;
	case SIGNUP:
		signup();
		break;
	default:
		std::cout << "No such option!" << std::endl;
		break;
	}
}
