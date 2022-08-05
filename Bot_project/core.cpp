#include <iostream>
#include <string>
#include <ctime>
#include <chrono>
#include <ratio>


using namespace std;


bool prompt(const string& user_name )
{
    using namespace chrono;

    //declaring the variables locally.
    string user_input, answer;
    string greetings[] = {"hello", "hi", "greetings", "how are you", "wussup"};
    string date_inputs[] = {"date today", "date tomorrow", "date++"};
    string time_inputs[] {"time now"}; // Might add more later.

    duration<int,std::ratio<60*60*24> > one_day (1); // making a ratio between time values.

    system_clock::time_point today = system_clock::now(); //Defining today and tomorrow.
    system_clock::time_point tomorrow = today + one_day;

    time_t tt;


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
    else if(user_input.find(date_inputs[0]) != string::npos || user_input.find(time_inputs[0]) != string::npos)
    {
        tt = system_clock::to_time_t (today);
        answer = ctime(&tt);
    }
    else if (user_input.find(date_inputs[1]) != string::npos || user_input.find(date_inputs[2]) != string::npos)
    {
        tt = system_clock::to_time_t (tomorrow);
        answer = ctime(&tt);
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
