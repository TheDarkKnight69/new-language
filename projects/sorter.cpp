#include <iostream>

void sorter(int array[], int size);
int main()
{
  int array[10];
  for (int i = 0; i < 10; i++)
  {
    int tempVar;
    std::cout << "Enter a number for the array #" << i << '\n';
    std::cin >> tempVar;
    array[i] = tempVar;
  }
  int size = sizeof(array) / sizeof(array[0]);
  sorter(array, size);
  for (int i : array)
  {
    std::cout << i << std::endl;
  }
}

void sorter(int array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - i - 1; j++)
    {
      int temp;
      if (array[j] > array[j + 1])
      {
        temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}
