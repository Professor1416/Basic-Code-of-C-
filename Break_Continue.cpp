//break and continue statement

#include<iostream>
using namespace std;
int main()
{
	int a = 10; //variable def

	while(a <= 20)
	{
		if(a==15) //(a==15)when... //block of code to be executed if the condition is True.
		{
			a++; 
			cout<<"in if statement of a is:"<<a<<endl; //"endl" use for linebreak. 
			continue;                                 //Break :- when the loop iterates for first time, the value of i=10, the if statement result will be false, so the else condition is executed. 
	                                                 //loop iterates again now i=15; if condition result will be 'True' and loop breaks.
	                  //you can also use 'break' //Continue:-when the loop iterate for the first time the value of i=10, the if statement result will be false, so the else condition 2 is implemented.
	                                               //loop iterates again now i=15; if condition result will be 'True' and the code stop in between and strat new iterate unitl the end condition met.       	
		}

			cout<<"the value of a is:"<<a<<endl; //"cout" use for print line.
			a++; // a++ for this condition 'a <= 20'. value increase upto 20.


	}
	return 0;
}


//Output
/*
//Output for Break
the value of a is:10
the value of a is:11
the value of a is:12
the value of a is:13
the value of a is:14
in if statement of a is:16

//Output for Continue
the value of a is:10
the value of a is:11
the value of a is:12
the value of a is:13
the value of a is:14
in if statement of a is:16
the value of a is:16
the value of a is:17
the value of a is:18
the value of a is:19
the value of a is:20
*/


                                       //Prashant Dasnur