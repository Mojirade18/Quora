#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string character;
int size_of_character, class_of_the_game, i;
bool running;

int main()
{
    cout << "Welcome to the Interactive Adventure Game!\n";
    cout << "Prepare for an epic journey filled with choices and challenges.\n";
    cout << "Enter your character's name\n";
    cout << "N.B: The name must be 5 letter words or less: ";
    getline(cin, character);
    size_of_character = character.size();
    int countering = 0;
    for (i = 0; i < size_of_character; i++)
    {
        char c = character[i];
        if (!isalpha(c))
        {
            countering++;
        }
    }
    if (countering == 0)
    {
        cout << "Nice job.";
    }
    else
    {
        cout << "Input only letters.";
    }

    while (running)
    {
        cout << "Choose your class:";
        cout << "1) Warrior";
        cout << "2) Mage";
        cout << "3) Thief";
        cin >> class_of_the_game;
        if (class_of_the_game == 1 || class_of_the_game == 2 || class_of_the_game == 3)
        {
            cout << "You picked the right class. Weldon!";
        }
        else
        {
            cout << "Invalid input .";
        }
        switch (class_of_the_game)
        {
        case 1:
        {
            cout << "You are " << character << ", a brave warrior. Your journey begins in the enchanted forest of Eldoria. As you walk through the forest, you hear rustling in the bushes.";
            break;
        }
        case 2:
        {
            cout << "You are " << character << ", ";
            break;
        }
        case 3:
        {
            cout << "You are " << character << ", ";
            break;
        }
        }
    }

    return 0;
}