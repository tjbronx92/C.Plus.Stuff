//Section 9 - Nested If
//Shipping Calculator

/*
    Shipping Calculator

    Ask the user for package dimension in inches
    length, width, height - these should be integers

    All dimensions must be 10 inches or less or we can not ship it

    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

    */

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int length{}, width{}, height{};
  double base_cost {2.50};

  const int tier1_threshold{100}; //volume
  const int tier2_threshold{500}; //volume

  int max_dimension_length {10}; //inches

  double tier1_surcharge {0.10};
  double tier2_surcharge {0.25};

  // All dimensions must be 10 inches or less

  int package_volume{};

  cout << "Welcome to our package cost calculator" << endl;
  cout << "Enter legnth width and height of the package seperated by spaces: ";
  cin >> length >> width >> height;

  if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
    cout << "Sorry, Package Rejected -- max dimensions excceeded" << endl;
  }else{
    double package_cost {0};
    package_volume = length * width * height;
    package_cost = base_cost;

    if (package_volume > tier2_threshold) {
      package_cost += package_cost * tier2_surcharge;
        cout << "addint the tier 2 surcharge";
    }else if (package_volume > tier1_surcharge){
      package_cost += package_cost * tier1_surcharge;
        cout << "adding tier 1 surcharge";
    }
  //  cout << fixed << setpercision(2); // 2nd decimal place
    cout << "The volume of your package is: " << package_volume << endl;
    cout << "The cost to ship your package is: $" << package_cost << " to ship." << endl;
  }

cout << endl;

  return 0;

}
