//Relational(Comparison) Operator

#include <iostream>
using namespace std;

int main()
{
	int a = 21;
	int b = 10;//int use for integer value.

	//equal to
    if( a == b) // (a=21 == b=10) is False; Therefore a is not equal to b.
               //the two given values are equal to each other then result will be True, Otherwise it returns False.
	{
	cout <<"a is equal to b" << endl; //"cout" use for print line.
	}

	else
	{
	cout <<"a is not equal to b" << endl; //"endl" use for linebreak.
	}

    //not equal to
    if( a != b) // (a=21 != b=10) is True; Therefore a is not equal to b.
               // '!'not is True statement consider False and False statement consider to True.
    {
    cout <<"a is not equal to b" << endl; 
    }

    else
    {
    cout <<"a is equal to b" << endl;
    }


	//less than
    if( a < b) //(a=21 < b=10) is False; Therefore a is not less than b.
              //the first value is less than the second value then result will be True, Otherwise it returns False.
        { 
        cout <<"a is less than b" << endl;
        }

        else 
        {
        cout <<"a is not less than b" << endl;
        }

	//grater than
    if( a > b)//(a=21 > b=10) is True; Therefore a is grater than b.
              //the first value is grater than the second value then result will be True, Otherwise it returns False.
        { 
        cout <<"a is grater than b" << endl;
        }

        else 
        {
        cout <<"a is not grater than b" << endl;
        }

	//less than or equal to
    if( a <= b) //(a=21 <= b=10) is False; Therefore a is not less than or equal to  b.
              //the first value is less than or equal to  the second value then result will be True, Otherwise it returns False.
        { 
        cout <<"a is less than or equal to b" << endl;
        }

        else 
        {
        cout <<"a is not less than or equal to b" << endl;
        }

	//grater than or equal to
    if( a >= b) //(a=21 >= b=10) is True; Therefore a is grater than or equal to b.
               //the first value is grater than or equal to the second value then result will be True, Otherwise it returns False.
        { 
        cout <<"a is grater than or equal to b" << endl;
        }

        else 
        {
        cout <<"a is not grater than or equal to b" << endl;
        }

return 0;
}


//Output
/*
//equal to
a is not equal to b

//not equal to
a is not equal to b

//less than
a is not less than b

//grater than
a is grater than b

//less than or equal to
a is not less than or equal to b

//grater than or equal to
a is grater than or equal to b
*/


                                             //Prashant Dasnur