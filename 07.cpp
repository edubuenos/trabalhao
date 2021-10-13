#include<iostream>
void checar (float nota1, float nota2, float nota3, float media1, float media2){
	media1 =  (nota1+nota2+nota3)/3;
	if(nota1 > nota2 && nota2 > nota3){
		std::cout << "A media com 2 notas e: "<< (nota1+nota2)/2 << std::endl;
	}else if(nota2 > nota1 && nota3 > nota1){
		std::cout << "A media com 2 notas e: "<< (nota2+nota3)/2 << std::endl;
	}else if(nota3 > nota1 && nota1 > nota2){
		std::cout << "A media com 2 notas e: "<< (nota3+nota1)/2 << std::endl;
	}
	std::cout << "A media com 3 notas e: "<< media1;
}


int main(){
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	float media1 = 0;
	float media2 = 0;
	
	std::cout << "Digite a nota: ";
	std::cin >> nota1;
	std::cin >> nota2;
	std::cin >> nota3;
	
	checar(nota1, nota2, nota3, media1, media2);
	
	
	
	return 0;
}
