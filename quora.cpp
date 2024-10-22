#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
i declared the neccessary variables here.
*/
string gender, another_quote;
char new_quote;
int main() {
// i made a vector here to store the quotes i wrotes and the new ones the user would be using.
    vector<string> quotes = {
        "The shy is your limit",
        "Everyone can advise, but only you woukld live the consequence"
    };
// this is where the user gets to introduce his or herself so that the progrm can whine the user small.
    cout << "gender (she/he): ";
    cin >> gender;
    if (gender == "she" || gender == "SHE" || gender == "She")
    {
        cout << "Hello my beatiful queen!\n";
    }
    else if (gender == "he" || gender == "HE" || gender == "He")
    {
        cout << "Hello prince charming!";
    }
    else {
        cout << "Invalid input.";
    }
    cout << "1) Do you want to add a new quote? " << "\n";
    cout << "2) Do you want to delete the most recent quote you added? " << "\n";
    
    cin >> new_quote;
    // hello
    if (new_quote == 'y' || new_quote == 'Y')
    {
        cout << "New quote: ";
        getline(cin, another_quote);
        quotes.push_back(another_quote);
        cout << another_quote;
    }
    else if (new_quote == 'n' || new_quote == 'N') {
        cout << "i love fish";
    }
    return 0;
}
