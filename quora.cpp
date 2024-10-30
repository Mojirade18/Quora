#include <iostream>
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <vector>
using namespace std;
/*
i declared the neccessary variables here.
*/
string gender, another_quote, new_quote;
int option, i;
bool running = true;
int main()
{

    // i made a vector here to store the quotes i wrotes and the new ones the user would be using.
    vector<string> quotes = {
        "The sky is your limit.",
        "Everyone can advise, but only you woukld live the consequence."};

    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % quotes.size(); // Get a random index
    cout << "Here's a random quote for you: " << quotes[randomIndex] << endl;
    // this is where the user gets to introduce his or herself so that the progrm can whine the user small.
    while (running)
    {
        cout << "gender (she/he): ";
        cin >> gender;
        if (gender == "she" || gender == "SHE" || gender == "She")
        {
            cout << "Hello my beatiful queen!\n";
        }
        else if (gender == "he" || gender == "HE" || gender == "He")
        {
            cout << "Hello prince charming!\n";
        }
        else
        {
            cout << "Invalid input.";
        }
        continue;
        cout << "1) Do you want to add a new quote? " << "\n";
        cout << "2) Do you want to delete the most recent quote you added? " << "\n";
        cout << "3) Do you want to edit your most recent qoute?\n";
        cout << "4) Do you want to exit?\n";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            cout << "New quote: ";
            getline(cin, another_quote);
            quotes.push_back(another_quote);
            cout << another_quote;
            break;
        }
        case 2:
        {
            quotes.pop_back();
            for (int i = 0; i < quotes.size(); i++)
            {
                cout << quotes[i];
            }
            break;
        }
        case 3:
        {
            cout << "Type in the quote again: ";
            getline(cin, new_quote);
            quotes.pop_back();
            quotes.push_back(new_quote);
            // This shows the last item in the vector
            cout << quotes.back();
            break;
        }
        case 4:
        {
            cout << "Have a nice day!";
            running = false;
            break;
        }
        }
    }
    return 0;
}
