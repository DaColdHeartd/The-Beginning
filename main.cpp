#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declaring my variables
  double wearth, wdes, tg;
  int planetNumber;
  string planetName;
    //input of weight from user
   cout << "Enter your weight on Earth:";
   cin >> wearth;
    //input of target planet from user
   cout << "1.Mercury 2.Venus 3.Mars 4.Jupiter\n";
   cout << "5.Saturn 6.Uranus 7.Neptune\n";
   cout << "Which Planet are you visiting? :";
   cin >> planetNumber;




  //all possible conditions

  if (planetNumber == 1)
  {
    planetName = "Mercury";
    tg = 3.8;
  } else if (planetNumber == 2)
  {
    planetName = "Venus";
    tg = 9.1;
  } else if (planetNumber == 3)
  {
    planetName = "Mars";
    tg = 3.8;
  } else if (planetNumber == 4)
  {
    planetName = "Jupiter";
    tg = 23.4;
  } else if (planetNumber == 5)
  {
    planetName = "Saturn";
    tg = 10.6;
  } else if (planetNumber == 6)
  {
    planetName = "Uranus";
    tg = 9.2;
  } else if (planetNumber == 7)
  {
    planetName = "Neptune";
    tg = 11.9;
  }

    //variable to hold weight on new planet
 wdes = (wearth * tg) / 9.81;
    //display the new weight
  cout << "Your weight on " << planetName << " is " << wdes << " Newtons\n";







}












