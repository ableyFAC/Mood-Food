/*
    maybe I can use something like this to put restaurant info into the multimap...
*/
#include "RestaurantsList.h"

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

const string RESTAURANTS_FILE = "restaurants_database.txt";

void createMemberList(ifstream& infile, RestaurantsList& aMemberList)
{
    string firstName;
    string lastName;
    int points = 0;

    while (!infile.eof())
    {
        infile >> firstName >> lastName >> points;
        aMemberList.addMember(firstName, lastName, points);
    }
}

void getMemberData(MemberList& aMemberList)
{
    ifstream infile;

    infile.open(MEMBER_FILE);

    if (!infile)
    {
        cerr << MEMBER_FILE << " does not exist." << endl;
        exit(1);
    }

    createMemberList(infile, aMemberList);

    infile.close();
}