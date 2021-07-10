# include <iostream>

using namespace std;

int main () {
    /*
        To define variables
        <variable_type> <variable_name>
    */
    int age;

    // Assign value to age
    age = 19;

    // Declare and assign variable
    int count = 21;

    /*
        Variable types
    */
    // Int types
    short var1;    //bytes and  stores from -32768 to +32767
    short int var2;    //stores from -32768 to +32767
    signed short var3;    // stores from -32768 to +32767
    signed short int var4;    // stores from -32768 to +32767
    unsigned short var5;    // stores from 0 to +65535
    unsigned short int var6;    // stores from 0 to +65535
    int var7;    // stores from -32768 to +32767
    signed int var8;    // stores from -32768 to +32767
    unsigned int var9;    // stores from 0 to +65535
    long var10;    // stores from -2147483648 to +2147483647
    long int var11;    // stores from -2147483648 to +2147483647
    signed long var12;    // stores from -2147483648 to +2147483647
    signed long int var13;    // stores from -2147483648 to +2147483647
    unsigned long var14;    // stores from 0 to +4294967295
    unsigned long int var15;    // stores from 0 to +4294967295

    // Char - 8-bit int
    char varChar1 = 'A';
    char varChar2 = 65;

    // Floats - 4-bytes
    float floatVar1 = 2.65;

    // Doubles - 8-bytes
    double doubleVar = 2.65 * 2;

    // Boolean - 1-byte
    bool isDope = true;

    return 0;
}
