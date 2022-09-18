//Switch String:- In Switch String we use words and numbers in "duble quotes".

#include<iostream>
using namespace std;
int main()
{
String  ch = "one"; //which case you want to execute 'Enter' case value.
int a = 30; //variable def
int b = 20; 
int c;
switch(ch)
{
	case "one" : //the case label must end with colon(:)
	{
		//Addition
		c = a + b;
		cout<<"the value of a+b is"<<c<<endl; //"cout" use for print line.
		break; //It's necessary to use break after each block.
	}

	case "two" : //case label must be unique.
        {
        	//Subtract
                c = a - b;
                cout<<"the value of a-b is"<<c<<endl; //"endl" use for linebreak. 
        	break; //if you don't use it, then all cases executed.
	}

	case "three" :
        {
        	//Divition
                c = a / b;
                cout<<"the value of a/b is"<<c<<endl;
        }

	case "four":
        {
        	//Multiply
                c = a * b;
                cout<<"the value of a*b is"<<c<<endl;
        	break;
	}

	case "five" :
        {
        	//Modulus
                c = a % b;
                cout<<"the value of a%b is"<<c<<endl;
        	break;
	}

	default: //If none of the case label values matches to the value of the expression, then default part statement will be executed.
	{
	cout<<"Enter the valid value "<<endl;
	}





}
return 0;
}




//Output
/*
a = 30; b = 20;

case one: c = a + b;
the value of a+b is:50

case two: c = a - b;
the value of a-b is:10

case three: c = a / b;
the value of a/b is:1

case four: c = a * b;
the value of a*b is:600

case five: c = a % b;
the value of a%b is:10
*/





                              //Prashant Dasnur