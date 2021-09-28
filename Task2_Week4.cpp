#include <iostream>
#include < stdlib.h >

struct Player
{
	int x;
	int y;
};

struct Grid
{
	int totalX; //size of grid x
	int totalY; // size of grid y

	void Render(Player obj)
	{
		for (int col = 0; col < totalY; col++)
		{
			for (int row = 0; row < totalX; row++)
			{
				if (obj.x == row && obj.y == col)
				{
					std::cout << "P";
				}
				else
				{
					std::cout << ".";
				}
			}

			std::cout << std::endl;
		}
	}
};

struct PlayerInput
{
	std::string yourString;

	char Getinput()
	{
		std::cout << "WASD TO MOVE. ";
		std::cout << "Press a key + [enter]: ";
		std::cin >> yourString;

		std::cout << std::endl;
		std::cout << "You pressed: " << yourString[0] << std::endl;
		std::cout << "Press Q to quit.";

		std::cin.clear();

		std::cout << std::endl;

		return yourString[0];
	}
};

int main()
{
	Grid grid; //{ 20, 10 }
	grid.totalX = 20;
	grid.totalY = 10;

	Player obj; //{ 3, 6 }
	obj.x = 0;
	obj.y = 0;

	PlayerInput playerInput;
	char input = '0';

	while (input != 'q') 
	{
		grid.Render(obj);
		input = playerInput.Getinput();
		
		if (input == 'a')
		{
			obj.x -= 1;
		}
		if (input == 'd')
		{
			obj.x += 1;
		}
		if (input == 'w')
		{
			obj.y -= 1;
		}
		if (input == 's')
		{
			obj.y += 1;
		}
	}
}
