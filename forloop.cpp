//For Loop

#include <iostream>
using namespace std;

int main()
{
	int a; //Variable def

	for(a = 10; a <= 20; a++ ) // (a=10 is initialization statement);(a<=20 is test condition statement);(a++ is increment statement)
		                      //Initialization:-the control-variable is done first, using assignment statement such as a=10 or count=0.
		                     //Test Condition:- If condition is 'True', the body of loop is ececuted. Otherwise the the loop is terminted.
		                    //Increment/Decrement:- here is 'Increment' then, the control variable is incremented and this value again tested.
		                   //this process continues till the value of the control variable fails to satisfy the test-condition.    
	cout<<"the value of a is:"<<a<<endl; //"endl" use for linebreak. //"cout" use for print line.

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
