#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{
	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	//enter any string the length of 16 chars to get 'congrats'
	std::cin >> pwd.value; //the bug happends because of the direct input into the array and the fact the struct saves the bool variable after the array, when entering a string of 16 chars the 17th char is NULL(0) so the bool turns to false 

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if(!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}
