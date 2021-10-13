#include <iostream>
#include <cstdlib>
#include <ctime> 

float checar (float a){
	srand(time(NULL));
	a = rand() % 5;
	return a+1;
}

int main(){
	
	float a= 0;
	std::cout << "O numero sorteado e: " << checar(a);
	
}
