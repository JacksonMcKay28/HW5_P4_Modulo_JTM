#include <iostream>

using namespace std;

int main() {
  int values[10] = {};

  for (int i = 0; i < 10; i++) 
  {
    cin >> values[i];
  }

  int sum = 0;

  for (int j = 0; j < 10; j++) 
  {
    if ((values[j] % 42) > 0)
      sum = sum + 1;
    else;

  }
  cout << sum
}