#include<iostream>
int main(){
char character='A';
char*charpointer=&character;
std::cout<<"the value of char variable is :"<<*charpointer<<std::endl;
return 0;
}
