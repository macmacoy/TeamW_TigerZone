#include <iostream>

#include "Tile.h"
#include "Players.h"
#include "Gamebase.h"

using namespace std;

class Board
{
private:
	void PlaceStartTile();
	void CheckTilePlacement(const Tile& tile, int xPos, int yPos);
	void CheckMeeplePlacement(const Tile& tile, xPos, yPos, meepleSpot);
	void CheckCompletedCity(xPos,yPos);
	void CheckCompletedRoad(xPos, yPos);
	void CheckSurroundedBuilding(xPos, yPos);
	
	Tile deck[72];
	
public:

	Board();
	~Board();

    void DisplayBoard();
	void PlaceTile(const Tile& tile, int xPos, int yPos);
	void CheckAvailibleSpots(const Tile& tile);
	void ShowAvailibleMeepleSpots();
	int CountEndGameScore(int playerNumber);
	
	
	void MakeDeck();
	
};