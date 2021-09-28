#include <iostream>

void task1();
void task3();
void dice();


int num1, num2;
int sum;

struct Person
{
	std::string first_name;
	std::string last_name;
	int phone_num;
};

int main()
{
	dice();
	return 0;
}

void task1()
{
	std::cout << "Simple calculator." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Enter action." << std::endl;
	std::cout << " " << std::endl;
	std::cout << "1. + Add" << std::endl;
	std::cout << "2. - Subtract" << std::endl;
	std::cout << "3. * Multiply" << std::endl;
	std::cout << "4. / Divide" << std::endl;

	std::cin >> sum;

	std::cout << "Enter your two numbers." << std::endl;

	std::cin >> num1 >> num2;
	

	switch(sum){
	case 1:
		std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
		break;
	case 2:
		std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
		break;
	case 3:
		std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
		break;
	case 4:
		std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
		break;
	}
}
void task3()
{
		Person a;
		std::cout << "Enter first name: " << std::endl;
		std::cin >> a.first_name;
		std::cout << "Enter last name: " << std::endl;
		std::cin >> a.last_name;
		std::cout << "Enter phone number: " << std::endl;
		std::cin >> a.phone_num;

		Person b;
		std::cout << "Enter first name: " << std::endl;
		std::cin >> b.first_name;
		std::cout << "Enter last name: " << std::endl;
		std::cin >> b.last_name;
		std::cout << "Enter phone number: " << std::endl;
		std::cin >> b.phone_num;

		Person c;
		std::cout << "Enter first name: " << std::endl;
		std::cin >> c.first_name;
		std::cout << "Enter last name: " << std::endl;
		std::cin >> c.last_name;
		std::cout << "Enter phone number: " << std::endl;
		std::cin >> c.phone_num;
		

		std::cout << std::endl;
		std::cout << "Name: " << a.first_name << " " << a.last_name << std::endl;
		std::cout << "Phone number: " << a.phone_num << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "Name: " << b.first_name << " " << b.last_name << std::endl;
		std::cout << "Phone number: " << b.phone_num << std::endl;
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "Name: " << c.first_name << " " << c.last_name << std::endl;
		std::cout << "Phone number: " << c.phone_num << std::endl;
		std::cout << std::endl;
}
void dice() 
{
	srand(time(NULL));

	int result = 0;
	int number = 6;
	char hold{};
	char quit{};
	int dice_throw[5]{};
	int hold_dice[5]{};

	do {
		std::cout << std::endl;
		std::cout << "Press 1-5 to choose a dice to hold." << std::endl;
		std::cout << "Press H to stop holding." << std::endl;

		for (int i = 0; i < 5; i++) { //0-4, 5 items
			result = rand() % number + 1;
			dice_throw[i] = result; //putting values from result into array[i].
			std::cout << result << " "; //printing result.
		}

		std::cin >> hold;

		std::cout << " " << std::endl;
		std::cout << "You are holding:" << std::endl;

		switch (hold) {
		case '1':
			hold_dice[0] = dice_throw[0];
			break;
		case '2':
			hold_dice[1] = dice_throw[1];
			break;
		case '3':
			hold_dice[2] = dice_throw[2];
			break;
		case '4':
			hold_dice[3] = dice_throw[3];
			break;
		case '5':
			hold_dice[4] = dice_throw[4];
			break;
		}
		for (int i = 0; i < 5; i++) {
			std::cout << hold_dice[i] << " ";
		}
		std::cout << " " << std::endl;
	} while (hold != 'H' && hold != 'h');
}
