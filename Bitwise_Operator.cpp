// Birwise Operator

#include<iostream>
using namespace std;
int main()
{
int a = 50;  //00110010 in binary.
int b = 30; //00011110 in binary.
int c = 0; //int use for integer value.
int d = 0;
int e = 0;
int f = 0;
int g = 0;
int h = 0;

//Bitwise AND 
c = a & b; // 00110010 & 00011110 = 00010010 i.e means is '18'.
cout<<"the value of AND is:"<<c<<endl;

//Bitwise OR
d = a | b; // 00110010 | 00011110 = 00111110 i.e means is '62'.
cout<<"the value of OR is:"<<d<<endl;

//Bitwise Exclusive XOR
e = a ^ b; // 00110010 ^ 00011110 = 00101100 i.e means is '44'.
cout<<"the value of Exclusive OR is:"<<e<<endl;

//Bitwise Complement of a
f = ~a; // -(50+1)= i.e means is '-51'.
cout<<"the value of Complement is:"<<f<<endl;

//Bitwise Shift Left
g = a << 2; //50=110010 << 2 :- 11001000 i.e means is '200'. //Shift with 2 zero to left side.
cout<<"the value of Shift Left is:"<<g<<endl;

//Bitwise Shift Right
h = a >> 2; // 50=110010 >> 2 :-  001100 i.e means os '12'. //Shift with 2 zero to right side.
cout<<"the value of Right Shift is:"<<h<<endl;

return 0;

}


//Output
/*
  the value of AND is:18
  the value of OR is:62
  the value of Exclusive OR is:44
  the value of Complement is:-51
  the value of Shift Left is:200
  the value of Right Shift is:12
 
 */






                  	 	 		  	 	 		 //Prashant Dasnur