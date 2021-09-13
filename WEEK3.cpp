#include <iostream>
#include <ctime>

void menu();
void easy();
void normal();
void hard();

int main() {
    menu();

}

void menu() {

    int(difficulty) {};

    std::cout << "Welcome to guess the number." << std::endl;
    std::cout << "Please select a difficulty." << std::endl;
    std::cout << "1. Easy." << std::endl;
    std::cout << "2. Normal." << std::endl;
    std::cout << "3. Hard." << std::endl;
    
    std::cout << " " << std::endl;
    std::cout << "Your choice:" << std::endl;
    std::cin >> difficulty;

        switch (difficulty) 
        {
        case 1:
            easy();
                break;
        case 2:
            normal();
                break;
        case 3:
            hard();
                break;
        }
}

void easy() {
    char choice{};
        std::cout << "Guess the number!" << std::endl;
        std::cout << "Difficulty: Easy." << std::endl;
        std::cout << "Guess numbers from 1 - 5." << std::endl;
        std::cout << " " << std::endl;

        srand(time(NULL));
        int secretnum = rand() % 5 + 1;
        int guess{};
        int guesscount = 0;
        int highscore{};

        while (secretnum != guess) {

            if (guess < secretnum && guess >= 1) {
                std::cout << "your guess is too low." << std::endl;
                guesscount++;
            }

            else if (guess > secretnum && guess <= 5) {
                std::cout << "your guess is too high." << std::endl;
                guesscount++;
            }

            else if (guess == 0) {
                ;
            }

            else {
                std::cout << "Invalid input." << std::endl;
            }

            std::cout << "Enter your guess." << std::endl;
            std::cin >> guess;
        }

        do {
            switch (choice)
            {
            case 'Q': case 'q':
                std::cout << " " << std::endl;
                std::cout << "Quitting program." << std::endl;
                std::cout << " " << std::endl;
                exit(0);
                break;
            case 'P': case 'p':
                easy();
                break;
            default:
                ;
                break;
            }

        std::cout << "Congratulations! You win!" << std::endl;
        std::cout << "You guessed " << guesscount + 1 << " times." << std::endl;
        std::cout << "Do you want to play again?" << std::endl;
        std::cout << "P to play Q to quit." << std::endl;
        std::cin >> choice;
    }
    while (choice != 'q' && choice != 'Q');
}
void normal() {

    char choice{};
    std::cout << "Guess the number!" << std::endl;
    std::cout << "Difficulty: Normal." << std::endl;
    std::cout << "Guess numbers from 1 - 10." << std::endl;
    std::cout << " " << std::endl;

    srand(time(NULL));
    int secretnum = rand() % 10 + 1;
    int guess{};
    int guesscount = 0;
    int highscore{};

    while (secretnum != guess) {

        if (guess < secretnum && guess >= 1) {
            std::cout << "your guess is too low." << std::endl;
            guesscount++;
        }

        else if (guess > secretnum && guess <= 10) {
            std::cout << "your guess is too high." << std::endl;
            guesscount++;
        }

        else if (guess == 0) {
            ;
        }

        else {
            std::cout << "Invalid input." << std::endl;
        }

        std::cout << "Enter your guess." << std::endl;
        std::cin >> guess;
    }

    do {
        switch (choice)
        {
        case 'Q': case 'q':
            std::cout << " " << std::endl;
            std::cout << "Quitting program." << std::endl;
            std::cout << " " << std::endl;
            exit(0);
            break;
        case 'P': case 'p':
            easy();
            break;
        default:
            ;
            break;
        }

        std::cout << "Congratulations! You win!" << std::endl;
        std::cout << "You guessed " << guesscount + 1 << " times." << std::endl;
        std::cout << "Do you want to play again?" << std::endl;
        std::cout << "P to play Q to quit." << std::endl;
        std::cin >> choice;
    } while (choice != 'q' && choice != 'Q');
}
void hard() {
        
    char choice{};
    std::cout << "Guess the number!" << std::endl;
    std::cout << "Difficulty: Hard." << std::endl;
    std::cout << "Guess numbers from 1 - 30." << std::endl;
    std::cout << " " << std::endl;

    srand(time(NULL));
    int secretnum = rand() % 30 + 1;
    int guess{};
    int guesscount = 0;
    int highscore{};

    while (secretnum != guess) {

        if (guess < secretnum && guess >= 1) {
            std::cout << "your guess is too low." << std::endl;
            guesscount++;
        }

        else if (guess > secretnum && guess <= 30) {
            std::cout << "your guess is too high." << std::endl;
            guesscount++;
        }

        else if (guess == 0) {
            ;
        }

        else {
            std::cout << "Invalid input." << std::endl;
        }

        std::cout << "Enter your guess." << std::endl;
        std::cin >> guess;
    }

    do {
        switch (choice)
        {
        case 'Q': case 'q':
            std::cout << " " << std::endl;
            std::cout << "Quitting program." << std::endl;
            std::cout << " " << std::endl;
            exit(0);
            break;
        case 'P': case 'p':
            easy();
            break;
        default:
            ;
            break;
        }

        std::cout << "Congratulations! You win!" << std::endl;
        std::cout << "You guessed " << guesscount + 1 << " times." << std::endl;
        std::cout << "Do you want to play again?" << std::endl;
        std::cout << "P to play Q to quit." << std::endl;
        std::cin >> choice;
    } while (choice != 'q' && choice != 'Q');
}