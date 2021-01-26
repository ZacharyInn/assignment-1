#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int maxCapacity = 0;
  int numPeople = 0;

  //user input for both maxCapacity and numPeople
  cout << "Enter the maximum room capacity." << endl;
  cin >> maxCapacity;
  cout << "Enter the number of people attending the meeting." << endl;
  cin >> numPeople;

  //if number of people does not exceed max capacity then the cout states that it is legal to hold the meeting
  if (numPeople <= maxCapacity)
  {
    cout << "It is legal to hold the meeting. " << (maxCapacity - numPeople) << " more people may attend the meeting." << endl;
  }
  //otherwise the meeting is illegal
  else
  {
    //used fabs since the max capacity is larger than the number of people so the returned value will always be negative
    cout << "The meeting cannot be held las planned due to fire regulations. " << fabs(maxCapacity - numPeople) << " people must be excluded in order to meet the fire regulations." << endl;
  }

  return 0;
}
