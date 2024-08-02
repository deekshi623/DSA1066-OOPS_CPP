#include <iostream> 
class complex 
{ 
private: 
float real, 
imag; 
public: 
complex( ) 
{ 
} 
complex( float r, float i ) 
{ 
real = r; 
imag = i; 
} 
void getdata( ) 
{ 
float r, 
i; 
std::cout<< "Enter real and imaginary part\n "<<r,i; 
std::cin >> r >> i; 
real = r; 
imag = i; 
} 
void setdata( ) 
{ 
float i,r;
real = r; 
imag =i; 
} 
void displaydata( ) 
{ 
std::cout <<  "real = \n" << real; 
std::cout<<"Imaginary =\n "<<imag; 
} 
complex operator +( complex c ) 
{ 
complex t; 
t.real = real + c.real; 
t.imag = imag + c.imag; 
} 
complex operator *( complex c ) 
{ 
complex t; 
t.real = real * c.real - imag * c.imag; 
t.imag = real * c.imag + c.real * imag; 
return t; 
} 
} 
; 
int main( ) 
{
	complex c1, 
c2 ( 1.2, -2.5 ), 
c3, c4; 
c1.setdata (); 
c3 = c1 + c2; 
c3.displaydata( ); 
c4.getdata( ); 
complex c5 ( 2.5, 3.0 ), 
c6; 
c6 = c4 * c5; 
c6.displaydata( ); 
complex c7; 
c7 = c1 + c2 * c3; 
c7.displaydata( ); 
}
