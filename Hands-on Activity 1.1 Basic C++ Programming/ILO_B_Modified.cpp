#include <iostream>
#include <cmath>


class Triangle{
    private:
        double totalAngle, angleA, angleB, angleC;
        double sideA, sideB, sideC;
    public:
    Triangle(double A, double B, double C);
    void setAngles (double A, double B, double C);
    void setSides (double a, double b, double c){
    	sideA = a;
    	sideB = b;
    	sideC = c;
	};
    const bool validateTriangle();
    
    //new functions
    double computeArea();
    double computePerimeter();
    void classifyType();

};


int main(){
	
	double angleA, angleB, angleC;
	double sideA, sideB, sideC;
	
	std::cout<<"Enter the value of the three angles: "<<std::endl;
	std::cin>>angleA;
	std::cin>>angleB;
	std::cin>>angleC;

    Triangle set1(angleA, angleB, angleC);


    if(set1.validateTriangle()){
        std::cout<<"The shape is a valid triangle \n";
        
        std::cout<<"\nEnter the value of the three sides: "<<std::endl;
        std::cin>>sideA;
		std::cin>>sideB;
		std::cin>>sideC;
		set1.setSides(sideA, sideB, sideC);
		
		std::cout<<"\nArea: "<<set1.computeArea()<<std::endl;
		std::cout<<"Perimeter: "<<set1.computePerimeter()<<std::endl;
		std::cout<<"Type: ";
		set1.classifyType();
    }
    else{
        std::cout<<"The shape is NOT a valid triangle \n";
    }


}


Triangle::Triangle(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}


void Triangle::setAngles(double A, double B, double C){
    angleA = A;
    angleB = B;
    angleC = C;
    totalAngle = A + B + C;
}


const bool Triangle::validateTriangle(){
    return(totalAngle <= 180);
}

double Triangle::computeArea(){
	double s = (sideA + sideB + sideC) / 2;
	return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}

double Triangle::computePerimeter(){
	return sideA + sideB + sideC;
}

void Triangle::classifyType(){
	if (angleA < 90 && angleB < 90 && angleC < 90)
		std::cout<<"It is an Acute Triangle."<<std::endl;
	else if (angleA > 90 || angleB > 90 || angleC > 90)
		std::cout<<"It is an Obtuse Triangle."<<std::endl;
	else
		std::cout<<"Others."<<std::endl;
}


