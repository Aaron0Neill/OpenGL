#include <Game.h>
#include <cstdlib>	
#include <time.h>

int main(void)
{
	srand(static_cast<unsigned>(time(nullptr)));
	Game& game = Game();
	game.run();
}