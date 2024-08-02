#include <iostream>
#include <stdexcept>
void innerfunction(){
	try{
		throw std::runtime_error("error occured");	
	}
	catch(const std::runtime_error& e){
		std::cerr<<"caugt in innerfunction:"<< e.what()<< std::endl;
		throw;
	}
}
void outerfunction(){
	try{
	innerfunction();
}
catch(const std::runtime_error&e){
	std::cerr<<"caught in outerfuntion:"<<e.what()<< std::endl;
}
}
int main(){
	try{
		outerfunction();
		
	}
	catch(const std::exception& e){
		std::cerr<<"caught in main:"<<e.what()<<std::endl;
	}
	std::cout<<"program continues after handling exceptionn"<<std::endl;
return 0;
}
