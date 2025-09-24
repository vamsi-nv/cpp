#include <iostream>
using namespace std;

int main()
{

  int countdown = 5;
  while (countdown > 0)
  {
    cout << countdown-- << "\n";
  }
  cout << "Happy C++\n\n";

  for (int i = 1; i <= 10; i++)
  {
    for (int j = 1; j <= 10; j++)
    {
      printf("%5d", i * j);
    }
    cout << "\n";
  }

  int arr[] = {1, 2, 3, 4, 5};
  for (int i : arr)
  {
    cout << i * i << endl;
  }

  /*
    while
    do-while
    for
    forEach

    -------

    break
    continue
  */

  return 0;
}