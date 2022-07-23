#include <iostream>
#include <string>

using namespace std;

bool prompt(const string& user_name )
{
    //declaring the variables locally.
    string user_input, answer;
    string greetings[] = {"hello", "hi", "greetings", "how are you", "wussup"};


    cout << "You: ";
    getline(cin, user_input); // using *getline so it takes in strings with spaces.

    //a for loop to turn Input into lowercase
    for(char &user_input: user_input)
        user_input = tolower(user_input); //finally used std::tolower :)

    //if statement to answer only to specific strings
    if (user_input == greetings[0] || user_input == greetings[1])

    {
        answer =  "Hello there, " + user_name;
    }
    else if (user_input == greetings[2])
    {
        answer = "Are you trying to be fancy? It's not working.";
    }
    else if (user_input == greetings[3])
    {
        answer = "I'm fine, how can I help you?";
    }
    else if (user_input == greetings[4])
    {
        answer = "Wussup homie.";
    }
    else
    {
        cout << "still in development!\n";
    }

    cout << "Bot: " << answer << endl;

    return true;
}

int main()
{
    //again declaring variables.(locally)
    string user_name;

    //main function with a greeting message for the user.
    cout << "## Bot_Test_1 ##" << endl;

    //asking for the user's name.
    cout << "What is your name, User: ";
    getline(cin, user_name);

    cout << "Welcome, " << user_name << "." << endl;

    //calling prompt to save space
    prompt(user_name);

    //while loop so program doesn't automatically end.
    while(prompt(user_name));

    //also a non zero return value.
    return 0;
}

