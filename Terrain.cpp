#include "Terrain.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Checking to see if the input is valid.
Terrain::Terrain(string Location) {
	place = Location;
	if (place == "Mountain") {
		Events = 4;
	} else if (place == "Savanna") {
		Events = 4;
	} else if (place == "Jungle") {
		Events = 8;
	} else {
		Events = 0;
		cout << "This is not a valid location" << endl;
		exit(0);
	}
}

//Returns number of events.
int Terrain::get_events() {
	return Events;
}

//Returns the current score.
int Terrain::get_score() {
	return score;
}

//Returns the location
string Terrain::get_place() {
	return place;
}

//Random number generator.
int Terrain::get_rarity(){
	srand(time(NULL));
	int randNum = (rand() % 6) + 1;
	return randNum;
}
