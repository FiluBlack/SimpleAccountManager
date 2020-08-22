#pragma once
#include "Account.h"
#include "Email.h"
#include "Username.h"
#include "Password.h"

class Signup
{
private:
	Account newAccount;

public:
	Signup();
	~Signup();

	Account getAccount();

	Email inputEmail();
	Username inputUsername();
	Password inputPassword();
};

