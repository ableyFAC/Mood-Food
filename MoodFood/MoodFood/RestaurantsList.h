#include "Restaurants.h"
#include <map>
#include <algorithm>

using namespace std;
// this class will handle the multimap
// int should be the mood selected
// Restaurants object holds the name and such
class RestaurantsList
{
public:
	RestaurantsList() : resMap(new multimap<Restaurants, int>) {};

	std::string displayRestaurants(int mood);

	void addRestaurant(const std::string restaurantName, const double restaurantRating);

private:
	std::multimap <Restaurants, int>* resMap; 
};
