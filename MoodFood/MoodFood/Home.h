#ifndef HOME_H
#define HOME_H

#include <iostream>
#include <string>

using namespace std;


class Home
{
public:

	// default constructor
	Home() :  mood(0) {}

	// overloaded constructor
	Home(std::string newName, int newMood) : mood(newMood) {}

	/*
	*	greets the user with a message depending on the time of day
	*   no return value just yet... waiting to fully understand C++ time library functions
	*/
	void intro();

	/*
	*	Asks for the user's current mood
	*   returns the corresponding int
	*/
	int userMood();

	int getMood() { return mood; };
	void setMood(int newMood) { mood = newMood; };

private:
	int mood;
};
/*
*	greets the user with a message depending on the time of day and asks for the user's mood
*   returns the correpsonding number
*/

#endif