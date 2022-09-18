//Do While

#include <iostream>
using namespace std;

int main()
{
	int a = 10; //variable def

	//do loop
	do // the loop excutes once before the condition tested.
	{
	 cout<<"the value of a is:"<<a<<endl; c //"endl" use for linebreak. //"cout" use for print line.
	 a++;                                  // a++ for this condition 'a <= 20'. value increase upto 20.
	}while(a <= 20);                      //(a=10 <= 20) the condition is True; therefore execute conditional code.
                                         //the condition is true; then control jumps to back 'do', and the loop again ececutes unitl then condition is false.
	return 0;
}


//Output
/*
the value of a is:10
the value of a is:11
the value of a is:12
the value of a is:13
the value of a is:14
the value of a is:15
the value of a is:16
the value of a is:17
the value of a is:18
the value of a is:19
the value of a is:20
*/

                                     //Prashant Dasnur