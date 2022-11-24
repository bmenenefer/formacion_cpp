#include <iostream>
using namespace std;

int main()
{
  int a[3];
  a[0] = 0;
  a[1] = 20;
  a[2] = 60;
  int *p = &a[0];

  //cout << *a[0] << endl;
  cout << p << endl;
  cout << *p << endl;
  cout << ++*p << endl;
  cout << *++p << endl;
  cout << *p++ << endl;
  cout << *p << endl;

}
