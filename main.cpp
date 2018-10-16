#include "Game.h"


using namespace std;

int main()
{
	Game g;
	g.menu();
	g.play();


	return 0;
}

/*
int main()
{
	Stage s;
	int frame = 1;
	int spriteFrame = 0;
	int fps = 15;
	char input = ARROW_LEFT;
	unsigned long int elapser = 30000;
	int counter = 0;
	while (true) {

        Timer timer;

		while (timer.elapsed() < elapser / 100) {
			if (getCharIfAny(input)) {
				switch (input) {
				case ARROW_LEFT:
					s.moveForest(0);
					break;
				case ARROW_RIGHT:
					s.moveForest(1);
					break;
				case 'q':
					return 0;
				default:
					break;
				}
			}
		}
		
		s.moveItemsDown();
		counter++;
		if ((counter + 1) % 10 == 0)
			s.generateBlocks();
		if ((counter + 6) % 20 == 0) {
			//if (rand() % 3 == 0) {
			if (true) {
				if (rand() % 3 == 0) {
					s.generateHeals(5);
				}
				else
					s.generateHeals(1);
			}
		}
		elapser -= 40;
	}
     
	return 0;
     
}*/