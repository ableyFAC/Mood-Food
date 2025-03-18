#include "Home.h"
#include "Restaurants.h"
#include <chrono>

Restaurants restaurant1;

void Home::intro()
{
	string s(51, '-');

	cout << s << "\n"
		<< "\t	Welcome to MoodFood!\n"
		<< s << "\n" << endl;

	userMood(); 
}

int Home::userMood()
{
	cout << "How are you feeling right now, user?\n"
		<< "\t (1) Happy :D\n"
		<< "\t (2) Doing fine :)\n"
		<< "\t (3) A little down :/\n"
		<< "\t (4) Not that great :(\n" << endl;

	int option = 0;
	cin >> option;

	switch (option)
	{
	case 1:
		cout << "We're glad to hear that! Here are some restaurants to keep the good vibes going!\n";
		break;
	case 2:
		cout << "That's good to hear! Maybe some good food can make the day even better.\n";
		break;
	case 3:
		cout << "All is well, don't worry! Let us recommend you some things to munch on!\n";
		break;
	case 4:
		cout << "We're sorry to hear that. Here are some places that can make you feel better.\n";
		break;
	default:
		cerr << "Invalid input\n";
	}

	restaurant1.displayRestaurants(option);

	return option;
}