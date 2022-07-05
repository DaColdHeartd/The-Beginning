#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring my variables
  double wearth, wdes, tg;
  int planet;
  string plan;
    //input of weight from user
   cout << "Enter your weight on Earth:";
   cin >> wearth;
    //input of target planet from user
   cout << "1.Mercury 2.Venus 3.Mars 4.Jupiter\n";
   cout << "5.Saturn 6.Uranus 7.Neptune\n";
   cout << "Which Planet are you visiting? :";
   cin >> planet;




  //all possible conditions

  if (planet == 1)
  {
    plan = "Mercury";
    tg = 3.8;
  } else if (planet == 2)
  {
    plan = "Venus";
    tg = 9.1;
  } else if (planet == 3)
  {
    plan = "Mars";
    tg = 3.8;
  } else if (planet == 4)
  {
    plan = "Jupiter";
    tg = 23.4;
  } else if (planet == 5)
  {
    plan = "Saturn";
    tg = 10.6;
  } else if (planet == 6)
  {
    plan = "Uranus";
    tg = 9.2;
  } else if (planet == 7)
  {
    plan = "Neptune";
    tg = 11.9;
  }

    //variable to hold weight on new planet
 wdes = (wearth * tg) / 9.81;
    //display the new weight
  cout << "Your weight on " << plan << " is " << wdes << " Newtons\n";







}












