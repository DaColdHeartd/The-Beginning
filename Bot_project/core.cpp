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
    //I changed the syntax so I can understand it even more.
    for(int i = 0; i < user_input.length(); i++ )
        user_input[i] = tolower(user_input[i]); //finally used std::tolower :)

    //if statement to answer only to specific strings
    if (user_input.find(greetings[0]) != string::npos)
    {
        answer =  "Hello there, " + user_name;
    }
    else if(user_input.find(greetings[1]) != string::npos)
    {
       answer = "Hi!";
    }
    else if (user_input.find(greetings[2]) != string::npos)
    {
        answer = "Are you trying to be fancy? It's not working.";
    }
    else if (user_input.find(greetings[3]) != string::npos)
    {
        answer = "I'm fine, how can I help you?";
    }
    else if (user_input.find(greetings[4]) != string::npos)
    {
        answer = "Wussup homie.";
    }
    else if (user_input == "exit")
    {
        return false;
    }
    else
    {
        answer = "Still in Development!";
    }

    cout << "Bot: " << answer << "\n" ;

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

    while(prompt(user_name));

    return 0;
}

