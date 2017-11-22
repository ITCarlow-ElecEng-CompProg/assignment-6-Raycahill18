
/**
 *  Ray Cahill
 01/11/2017
 *  menuDrivenProgram.cpp
 *  c++ program to demonstrate a menu driven program
 */


/**< preprocessor directives */
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>


using namespace std;

int bin_2_dec(long int);
int dec_2_bin(long int);


/**< main function */
int main(void)
{
    /**< Heading written at the top of program */
	cout<< "Decimal And Binary Number System Conversion"<<endl;
	int n;
	char input;

/**< do while statement */
	do
	{
	    cout<< "\n Choose from the following: "<<
                "\n Press b for binary to dec "<<
                "\n Press d for decimal to bin "<<
                "\n Press q to quit program \n \t" ;

        cin>> input;

        /**< Switch case statement, case b, d, q  */
		switch (input)
		{
			case 'b':   cout << "\n Enter binary value...\n" << endl;
						/**< wait for key to be pressed */
						cin >> n;
						int bin_2_dec(long int);
						cout<< "\n The binary number " << n << " is " << bin_2_dec(n) << " in binary ";
						break;

			case 'd':   cout << "\n Enter Decimal  value...\n" << endl;
						/**< wait for key to be pressed */
						cin >> n;
						int dec_2_bin(long int);
						cout<< "\n The decimal number " << n << " is " << dec_2_bin(n) << " in binary ";
						break;
			case 'q':   cout << "\nGoodbye...\n" << endl;
						/**< wait for key to be pressed */
						//cout << "Press any key to continue..." << endl;
						//fflush(stdin);
						//getchar();
						break;
			default:	cout << "\nInvalid input, try again...\n" << endl;
						/**< wait for key to be pressed */
						cout << "Press any key to continue..." << endl;
						fflush(stdin);
						getchar();
						break;
		}
	}
	/**< while input is equal to 'q' return 0 */
	while (input != 'q');

	return 0;
}

int bin_2_dec(long int n)

{
	int decimal =0, i=0, remainder;
    /**< while n = 0 */
	while (n!=0)
    {
        remainder =n%10;
        n=n/10;
        decimal=decimal +remainder*pow(2,i);
        i++;
    }
    /**< Returns the decimal value */
    return decimal;
}

int dec_2_bin(long int n)
{
    long long binary=0;
    int remainder, i=1;

    while (n != 0)
    {
        remainder=n%2;
        n=n/2;
        binary=binary + remainder*i;
        i = i * 10;
    }
    /**< Return the Binary Value */
    return binary;
}
