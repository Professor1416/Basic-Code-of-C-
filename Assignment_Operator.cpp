//Assignment Operators

#include<iostream>
using namespace std;
int main()
{
	int a = 21;
	int c = 10; //int use for integer value.

	//Add AND
	c += a; //c = c + a; 10 + 21 = 31;
	cout<<"the addition is :"<<c<<endl; //"cout" use for print line.

	//Subtract AND
	c -= a; //c = c - a; 31 - 21 = 10;
    cout<<"the substraction is :"<<c<<endl; //"endl" use for linebreak. 

	//Multiply AND
	c *= a; //c = c * a; 10 * 21 = 210;
    cout<<"the multiplication is :"<<c<<endl;

	//Divison AND
	c /= a; // c = c /a; 210/10 = 10;
    cout<<"the division is :"<<c<<endl;

	//Mod AND
	c %= a; // c = c % a; 10 % 10 =10;
    cout<<"the modulus is :"<<c<<endl;
 	
	return 0;
}

//Output:-
/* the value of c is :31
   the value of c is :10
   the value of c is :210
   the value of c is :10
   the value of c is :10 */

											//Prashant Dasnur