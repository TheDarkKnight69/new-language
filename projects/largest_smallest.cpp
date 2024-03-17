#include <iostream>

int findLargest(int array[], int size);
int findSmallest(int array[], int size, int large);
int main()
{
  int largestNumber;
  int smallestNumber;
  int array[] = {1, 4, 3, 6, 9, 5, 2, 7, 8, 10};
  int size = sizeof(array) / sizeof(array[0]);
  largestNumber = findLargest(array, size);
  std::cout << "The largest number in the array is " << largestNumber << "\n";
  smallestNumber = findSmallest(array, size, largestNumber);
  std::cout << "The smallest number in the array is " << smallestNumber << "\n";
  return 0;
}

int findLargest(int array[], int size)
{
  int tempVar = 0;
  for (int i = 0; i < size; i++)
  {
    if (array[i] > tempVar)
    {
      tempVar = array[i];
    }
  }
  return tempVar;
}
int findSmallest(int array[], int size, int large)
{
  int tempVar = large;
  for (int i = 0; i < size; i++)
  {
    if (array[i] < tempVar)
    {
      tempVar = array[i];
    }
  }
  return tempVar;
}
