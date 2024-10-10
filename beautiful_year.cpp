#include <bits/stdc++.h>

using namespace std;

int main() {
  int year;
  cin >> year;

  // Check if the input year number already has distinct digits.
  bool hasDistinctDigits = true;
  int count[10] = {0};
  while (year > 0) {
    int rem = year % 10;
    count[rem]++;
    year = year / 10;
  }
  for (int i = 0; i < 10; i++) {
    if (count[i] > 1) {
      hasDistinctDigits = false;
      break;
    }
  }

  // If the input year number already has distinct digits, then simply output the input year number and terminate the program.
  if (hasDistinctDigits) {
    cout << year << endl;
    return 0;
  }

  // Increment the year number until it is strictly larger than the given one and has distinct digits.
  while (true) {
    year++;

    // Check if the year number has distinct digits.
    bool hasDistinctDigits = true;
    for (int i = 0; i < 10; i++) {
      count[i] = 0;
    }
    while (year > 0) {
      int rem = year % 10;
      count[rem]++;
      year = year / 10;
    }
    for (int i = 0; i < 10; i++) {
      if (count[i] > 1) {
        hasDistinctDigits = false;
        break;
      }
    }

    // If the year number has distinct digits, then output the year number and terminate the program.
    if (hasDistinctDigits) {
      cout << year << endl;
      return 0;
    }
  }

  return 0;
}
