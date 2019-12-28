//Section 8 - Flow Control
//If Statement

#include <iostream>

using namespace std;

int main() {
    int num {};
    const int min {10};
    const int max {100};

    cout << "Enter a number between " << min << " and " << max << ": ";
    cin >> num;

    if (num >= min) {
      cout << "\n===========If Statement 1 ==========" << endl;
      cout << num << " is greater than " << min << endl;

      int diff {num - min};
      cout << num << " is " << diff << " greater than " << min << endl;
    }

    if (num <= max) {
      cout << "\n===========If Statement 2 ==========" << endl;
      cout << num << " is less than or equal to " << max << endl;
      cout << endl;

      int diff {max - min};
      cout << num << " is " << diff << " less than " << max << endl;
    }
      if (num >= min && num <= max) {
        cout << "\n===========If Statement 3 ==========" << endl;
        cout << num << " is in range " << endl;
        cout << endl;
    }

      if (num == min || num == max) {
        cout << "\n===========If Statement 3 ==========" << endl;
        cout << num << " is right on the boundry " << endl;
        cout << "This means that all 4 Display" << endl;
      }

    return 0;
}
