#include <iostream>
using namespace std;

int main() {

  int firstArray[50];
  int secondArray[50]; 
	int numberOffirstArray;
  int numberofsecondArray;	
	int pos;		
	pos = 0;
	cout << "Please enter the number for the First Array, (input -24 to stop)" << endl;
	cin >> firstArray[pos];

	while (firstArray[pos] != -24)
	{
		pos++;
		cout << "Please enter the number for the First Array, (input -24 to stop)" << endl;
		cin >> firstArray[pos];
	}

	numberOffirstArray = pos;

cout << "Please enter the number for the Second Array, (input -24 to stop)" << endl;
	cin >> secondArray[pos];

while (secondArray[pos] !=-24)
{
  pos++;
  cout << "Please enter the number for the Second Array, (input -24 to stop)" << endl;
  cin >> secondArray[pos];
}

numberofsecondArray = pos;

  
  bool arraysEqual = true; // Flag variable
  int count = 0;           // Loop counter variable
  // Compare the two arrays.
  
  
  while (arraysEqual && count < pos) //this is to make sure the arrays are all the same.
  {
    if (firstArray[count] != secondArray[count]) // this makes sure that the firstArray and secondArray are equal.
        arraysEqual = false; // this is to see if the arrays don't add up then they are not equal.
    count++;
  }


  if (arraysEqual) // this is the if statement to state ethier they are equal or not.
    cout << "The arrays are equal.\n";
  else
    cout << "The arrays are not equal.\n";
}

//by changing the value the program outputs the statement the arrays are not equal.
