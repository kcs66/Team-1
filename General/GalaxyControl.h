#include <vector>
#include <stdlib.h>
class GalaxyControl
{

public:
	GalaxyControl();
	
	int getEnemyCount();

	int getPlayerCount();

	bool getInControl(int zone);

	bool getWinGame();

	bool getLoseGame();

	void enemyWinZone(int zone);

	void playerWinZone(int zone);

	void setZone(int zone, bool contr);
	//find an acceptable adjacent sector to attack from
	int findNeighbor(); 
private:

	int enemy_contr_count;
	int player_contr_count;
	bool inControl[9];
};
