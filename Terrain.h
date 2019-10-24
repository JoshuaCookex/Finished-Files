#ifndef TERRAIN_H
#define TERRAIN_H
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

//Creating Terrain class that Savanna, Mountain and Jungle classes will inherit from.
class Terrain {

	string place;
	int Events;
	int randNum;
	int score;

public:
	Terrain(string Location);
	int get_events();
	string get_place();
	int get_score();
	int get_rarity();

};
#endif