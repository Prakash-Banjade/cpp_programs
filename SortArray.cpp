// This programs sorts array upto length defined in 'arrayLength' variable maximum upto 10 as defined in 'myArr' array
// Concept used: integer array, multidimensional string array, nested for-loop, function, pointer, basic of swapping two numbers



#include <iostream>
using namespace std;

void printArray(int *array, int n);

int main(int argc, char const *argv[])
{
  int myArr[10];
  char position[][5] = {"1st", "2nd", "3rd", "4th", "5th",
                        "6th", "7th", "8th", "9th", "Last"};

  int arrayLength = 3;
  for (int i = 0; i < arrayLength; i++)
  {
    cout << "Enter " << position[i] << " no.: ";
    cin >> myArr[i];
  }

  for (int i = 0; i < arrayLength - 1; i++)
  {
    for (int j = 0; j < arrayLength - 1 - i; j++)
    {
      if (myArr[j] > myArr[j + 1])
      {
        int temp = myArr[j];
        myArr[j] = myArr[j + 1];
        myArr[j + 1] = temp;
      
      }
    }
  }

  cout << endl << "Sorted Array:" << endl;
  printArray(myArr, arrayLength);

  return 0;
}

void printArray(int *array, int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << array[i] << ", ";
  }
}