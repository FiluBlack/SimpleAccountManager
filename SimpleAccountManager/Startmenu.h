#pragma once
class Startmenu
{
private:
	enum Options { LOGIN=1,SIGNUP };

	void login();
	void signup();
public:
	// Constructor/Destructor
	Startmenu();
	~Startmenu();

	// function to choose the option to do in the startmenu
	void chooseOptions();
};

