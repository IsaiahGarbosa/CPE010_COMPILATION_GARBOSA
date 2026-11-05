#include <iostream>
#include <cmath>

float swap(float num1, float num2);
float temperature(float kelvin);
float twoPoints(float x1, float x2, float y1, float y2);

int main () {
	
	float num1, num2, kelvin, x1, x2, y1, y2;
	
	std::cout<<"Number swapper:"<<std::endl;
	std::cout<<"Enter first number: ";
	std::cin>>num1;
	std::cout<<"Enter second number: ";
	std::cin>>num2;
	swap(num1, num2);
	
	std::cout<<"\nKelvin to Fahrenheit Converter:"<<std::endl;
	std::cout<<"Enter kelvin value: ";
	std::cin>>kelvin;
	
	std::cout<<"\nFahrenheit: "<<temperature(kelvin)<<std::endl;
	
	std::cout<<"\nDistance between two points calculator:"<<std::endl;
	std::cout<<"Enter x1: ";
	std::cin>>x1;
	std::cout<<"Enter y1: ";
	std::cin>>y1;
	std::cout<<"Enter x2: ";
	std::cin>>x2;
	std::cout<<"Enter y2: ";
	std::cin>>y2;
	
	std::cout<<"\nDistance between two points: "<<twoPoints(x1, x2, y1, y2);
	
	
	
}

float swap(float num1, float num2){
	
	std::cout<<"\nBefore: "<<std::endl<<"Number 1: "<<num1<<std::endl<<"Number 2: "<<num2<<std::endl;
	
	float temp = num1;
	num1 = num2;
	num2 = temp;
	
	std::cout<<"\nAfter: "<<std::endl<<"Number 1: "<<num1<<std::endl<<"Number 2: "<<num2<<std::endl;
}

float temperature (float kelvin){
	float fahrenheit = (kelvin - 273.15) * 9 / 5 + 32;
	return fahrenheit;
};

float twoPoints(float x1, float x2, float y1, float y2){
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}


