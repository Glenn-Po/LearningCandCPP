// Convert.cpp .> Demonstrates type conversions.
#include <iostream>
#include <iomanip>
# include <cstdlib>
using namespace std;
int main()
{
char v_char = 'A';
cout << "v_char: " << setw(10) << v_char
<< setw(10) << (int)v_char
<< endl;
short v_short = -2;
cout << "v_short: " << dec << setw(10) << v_short
<< hex << setw(10) << v_short
<< endl;
unsigned short v_ushort = v_short;
cout << "v_ushort: " << dec << setw(10) << v_ushort
<< hex << setw(10) << v_ushort
<< endl;
unsigned long v_ulong = v_short;
cout << "v_ulong: " << hex << setw(20) << v_ulong
<< endl;
float v_float = -1.99F;
cout << "v_float: " << setw(10) << v_float << endl;
cout << "(int)v_float: " << setw(10)
<< dec << (int)v_float << endl<<endl;
system("pause");
return 0;
}
/*
v_char: A 65
v_short: -2 fffe
v_ushort: 65534 fffe
v_ulong: fffffffe
v_float: -1.99
(int)v_float: -1
*/
