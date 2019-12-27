//PACKT C++ by example
//Project 1 - Virtual Die

#include <iostream>
#include <random>

using namespace std;

main(){
  random_device random_device;
  default_random_engine random_engine(random_device());
  uniform_int_distribution<int> six_sided_die(1, 6);

  int random_int = six_sided_die(random_engine);

  cout << random_int << endl;

  return 0;
}

//Issue = Only prints the number 1
