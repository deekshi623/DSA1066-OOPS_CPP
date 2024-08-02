#include<iostream>
int main(){
	float number=3.14f;
	float*ptr=&number;
	std::cout<<"the value is"<<*ptr<<std::endl;
	return 0;
}
