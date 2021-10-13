#include <iostream>
#include <cstdlib>
#include <ctime> 

void checar (int a, int n1, int n2, int n3, int n4, int n5, int n6){
	srand(time(NULL));
	for(int i =0; i < 100000; i++){
		a = rand() % 6+1;
		if(a == 1){
			n1++;
		}else if(a == 2){
			n2++;
		}else if(a == 3){
			n3++;
		}else if(a == 4){
			n4++;
		}else if(a == 5){
			n5++;
		}else if(a == 6){
			n6++;
		}
	}
	std::cout << "O numero 1 apareceu: "<< n1 << " vezes" << std::endl;
	std::cout << "O numero 2 apareceu: "<< n2 << " vezes" << std::endl;
	std::cout << "O numero 3 apareceu: "<< n3 << " vezes" <<std::endl;
	std::cout << "O numero 4 apareceu: "<< n4 << " vezes" <<std::endl;
	std::cout << "O numero 5 apareceu: "<< n5 << " vezes" <<std::endl;
	std::cout << "O numero 6 apareceu: "<< n6 << " vezes" <<std::endl;
	
}

int main(){
	
	int a= 0;
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
	int n5 = 0;
	int n6 = 0;
	
	checar(a, n1, n2, n3, n4, n5 ,n6);
	return 0;
}
