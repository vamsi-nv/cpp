#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[5] = {0};

  for (int i = 0; i < 5; i++)
  {
    cout << "Enter number " << i + 1 << " : ";
    cin >> arr[i];
  }

  for (int i : arr)
  {
    cout << i << " ";
  }

  // bubble sort
  for (int i = 0; i < 5 - 1; i++)
  {
    for (int j = 0; j < 5 - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
  }

  cout << "\n\nSorted : ";
  for (int i : arr)
  {
    cout << i << " ";
  }

  return 0;
}