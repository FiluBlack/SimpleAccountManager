#pragma once

#include "AccountList.h"
#include "Email.h"
#include "Password.h"
#include "UserID.h"
#include "Username.h"
class Account
{
private:
	char name;
	UserID accountID;
	Email accountEmail;
	Password accountPassword;

	enum AccountOptions {SEARCHACCOUNT=1};
public:
	Username accountUsername;

	Account(Email email, Username username, Password password);
	~Account();

	static Account findAccountByID();
	static Account findAccountByUsername();
	static AccountList giveAllByID();
	static AccountList giveAllByUsername();
};

