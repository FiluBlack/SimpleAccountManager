#pragma once
#include "Account.h"
#include "Login.h"
#include "Signup.h"

class Startmenu
{
private:
	enum Options { LOGIN=1,SIGNUP };

	Account accountLogin();
	Account accountSignup();
public:
	// Constructor/Destructor
	Startmenu();
	~Startmenu();

	// function to choose the option to do in the startmenu
	void chooseOptions();
};

