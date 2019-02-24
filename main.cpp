#include <iostream>
#include <math.h>

using namespace std;

int main()
{
float a, b, c;

cout << "Enter a value for a " << endl;
cin >> a;
cout << "Enter a value for b " << endl;
cin >> b;
cout << "Enter a value for c " << endl;
cin >> c;

/* Calculate the discriminant*/
float disc, rootDisc;
disc = pow(b,2) - 4 * a * c;
rootDisc = sqrt(disc);

float x1,x2;

/* First root*/
x1 = (-b - rootDisc) / (2 * a);

/* Second root*/
x2 = (-b + rootDisc) / (2 * a);

cout << "First root is " << x1 << endl;
cout << "Second root is " << x2 << endl;

return 0;

}
