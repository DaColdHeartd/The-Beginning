#include <iostream>
#include <string.h>
//The program only has one response for two inputs at the moment
//hopefully I'll add more cases in the future.

using namespace std;
 //Declaring and defining some variables
 string input, input_name, answer;
 string greetings = "hello:hi";
 string greeting = "Hello There, ";
 string input_name2 = input_name;
//a function that doesn't ask for a name
//so I can call and return for a loop
//(so the program stays awake).
//Definitely not the best way but I'll change it later.
int prompt(string input_name2)
{
    cout << "You: ";
    cin >> input;
    //a for loop to turn Input into lowercase
    for(char &input: input)
        input = input | ' ';        // similar to: c = tolower(c);
    //new variables to hold the substring(before the assigned position.)
    int pos2 = greetings.find(":");
    string sub2 = greetings.substr(0 , pos2);


    //new variables to hold the substring(after the assigned position.)
    int pos = greetings.find(":");
    string sub = greetings.substr(pos + 1) ;

    //if statement to answer only to specific substrings
    if (input == sub || input == sub2)

    {
        answer = greeting + input_name2;
        cout << "Bot: " <<answer << endl;
    } else
    {
        cout << "still in development!\n";
    }


    //returning the function inside it self for a loop.
    return prompt(input_name);
}



int main()
{

    //main function with a greeting message for the user.
    cout << "## Bot_Test_1 ##" << endl;
    //asking for user's name.
    cout << "What is your name, User: ";
    cin >> input_name;
    cout << "Welcome, " << input_name << endl;
    //prompting user to enter commands/input.
    cout << "You: ";
    cin >> input;
    //for loop to turn iInput to lowercase.
    for(char &input: input)
        input = input | ' ';        // similar to: c = tolower(c);

    //new variables to hold the substring(before assigned pos.)
    int pos2 = greetings.find(":");
    string sub2 = greetings.substr(0 , pos2);



    //variables to hold the substring(after assigned pos.)
    int pos = greetings.find(":");
    string sub = greetings.substr(pos + 1) ;
    //if statement to answer specific strings.
    if (input == sub || input == sub2)
    {
        answer = greeting + input_name;
        cout << "Bot: " << answer << endl;

    } else
    {
        cout << "still in development!\n";
    }


    //calling and returning the prompt function so the program doesn't end.
    prompt(input_name);
    return prompt(input_name);

}
