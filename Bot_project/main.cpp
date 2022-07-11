#include <iostream>
#include <string>

using namespace std; //I know using namespace std is bad practice, but i'm just testing stuff out.

//a function that doesn't ask for a name
//so I can call and return for a loop
//(so the program stays awake).
//Definitely not the best way but I'll change it later.

int prompt(const string& input_name )
{
    //declaring the variables locally.
    string input, answer;
    string greetings[] = {"hello", "hi", "greetings", "how are you", "wussup"};

    cout << "You: ";
    getline(cin, input); // using *getline so it takes in strings with spaces.


    //a for loop to turn Input into lowercase
    for(char &input: input)
        input = input | ' ';        // similar to: c = tolower(c);


    //if statement to answer only to specific strings
    if (input == greetings[0] || input == greetings[1])

    {
        answer =  "Hello there, " + input_name;
        cout << "Bot: " << answer << endl;
    }
    else if (input == greetings[2])
    {
        answer = "Are you trying to be fancy? It's not working.";
        cout << "Bot: " << answer << endl;
    }
    else if (input == greetings[3])
    {
        answer = "I'm fine, how can I help you?";
        cout << "Bot: " << answer << endl;

    }
    else if (input == greetings[4])
    {
        answer = "Wussup homie.";
        cout << answer << endl;
    }
    else
    {
        cout << "still in development!\n";
    }


    //non zero return to return errors.
   return 1;
}



int main()
{
    //again declaring variables.(locally)
    string input_name;

    //main function with a greeting message for the user.
    cout << "## Bot_Test_1 ##" << endl;

    //asking for the user's name.
    cout << "What is your name, User: ";
    getline(cin, input_name);

    cout << "Welcome, " << input_name << "." << endl;

    //calling prompt to save space
    prompt(input_name);

    //while loop so program doesn't automatically end.
    while(prompt(input_name) == true)
    {
        prompt(input_name);
    }
    //also a non zero return value.
    return 1;

}
