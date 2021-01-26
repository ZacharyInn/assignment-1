#include <iostream>
using namespace std;

int main()
{
  const double ton = 35273.92;
  double weight = 0.0;

  //getting user input of the weight
  cout << "Please enter the weight of a package of breakfast cereal in oz." << endl;
  cin >> weight;

  //calculate the conversions in the cout statements
  cout << "The weight of the package in tons is: " << (weight/ton) << endl;
  cout << "You would need " << (ton/weight) << " boxes of cereal to yield one metric ton of cereal." << endl;

  return 0;
}
