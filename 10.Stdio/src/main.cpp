#include <iostream>
#include <stdio.h>
using namespace std;

#define C_INDICATIVO 9

int main()
{



  {
    /*

     char numero[10];
     char numbers[10] = "1 2 3 4 5";

     int i = 1234567890;
     int a, b, c, d, e;

     sprintf (numero, "%d", i);

     for (auto item : numero)
       {

         cout << endl;
         cout << item;
         // cout << endl;
       }

     cout << endl;
     sscanf (
       numbers, "%d%d%d%d%d", &a, &b, &c, &d,
       &e); // Extrae cada elemento del array y se lo asigna a cada variable.
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     cout << d << endl;
     cout << e << endl;
     return 0;
   */
  }

  {
    /*
     char callsign1a[C_INDICATIVO + 1] = "VLG157234";
     char callsign2a[C_INDICATIVO + 1] = "IBE487   ";
     char callsign1b[C_INDICATIVO] = "VLG157234";
     char callsign2b[C_INDICATIVO] = "IBE487  ";

     printf ("Callsign 1a: %s, Callsign 2a: %s\n", callsign1a, callsign2a);
     printf("Callsign 1b: %s, Callsign 2b: %s\n", callsign1b, callsign2b);

   */
  }

  {
    char callsign1a[C_INDICATIVO + 1] = "VLG157234";
    char callsign2a[C_INDICATIVO + 1] = "IBE487   ";
    int a = 0, b = 7;
    char callsign1b[C_INDICATIVO] = "VLG157234";
    char callsign2b[C_INDICATIVO] = "IBE487  ";

    printf ("Callsign 1a: %s, Callsign 2a: %s\n", callsign1a, callsign2a);
    printf ("Callsign 1b: %s, Callsign 2b: %s\n", callsign1b, callsign2b);

    printf ("c1a -> %p, c2a -> %p, a -> %p, b -> %p\n",
            callsign1a,
            callsign2a,
            &a,
            &b);

  }


}
