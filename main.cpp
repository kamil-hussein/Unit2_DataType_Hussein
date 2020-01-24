#include <iostream>
using namespace std;
int main() {
  int i;
  cout <<"how many pennies do you have: ";
  cin >>i;
  int dollars=i/100;
  int remainder=i%100;
  int quarter =remainder /25;
  remainder%=25;
  int dime=remainder/10;
  remainder%=10;
  int nickel=remainder/5;
  remainder%=5;
  int penny=remainder/1;
  cout<<"dollars:" <<dollars <<endl;
  cout <<"quarters:" <<quarter<<endl;
  cout << "dimes:" <<dime <<endl;
  cout <<"nickles:" <<nickel <<endl;
  cout <<"pennies:" <<penny <<endl;
  
return 0;
}
