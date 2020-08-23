#pragma once
class Username
{
private:
	char username;

public:
	Username(char usernameChar);
	~Username();

	static bool exist(char username);
	static bool isValid(char username);

	Username& operator=(char& assignedUsername);
};

