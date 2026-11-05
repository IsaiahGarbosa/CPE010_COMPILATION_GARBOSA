#include <iostream>
#include <string.h>

class Fruits{
private:
	std::string productName;
	double price;
	int quantity;
public:
	//constructor
	Fruits(std::string newProductName = "", double newPrice = 0, int newQuantity = 0){
		productName = newProductName;
		price = newPrice;
		quantity = newQuantity;
	};
	
	//destructor
	~Fruits(){
		std::cout<<"Destructor Called"<<std::endl;
	};
	
	//copy constructor
	Fruits(const Fruits &copyFruit){
		productName = copyFruit.productName;
		price = copyFruit.price;
		quantity = copyFruit.quantity;
	};
	
	//copy assignment
	Fruits& operator=(const Fruits &copyFruit){
		if(this != &copyFruit){
			productName = copyFruit.productName;
			price = copyFruit.price;
			quantity = copyFruit.quantity;
		}
		return *this;
	};
	
	//display
	void display(){
		std::cout<<"\nFruit: "<<productName<<std::endl;
		std::cout<<"Price: "<<price<<std::endl;
		std::cout<<"Quantity: "<<quantity<<std::endl;
		std::cout<<"Total: "<<calculateSum()<<std::endl;
	};
	
	double calculateSum(){
		return price * quantity;
	};

};

class Vegetables{
private:
	std::string productName;
	double price;
	int quantity;
public:
	//constructor
	Vegetables(std::string newProductName = "", double newPrice = 0, int newQuantity = 0){
		productName = newProductName;
		price = newPrice;
		quantity = newQuantity;
	};
	
	//destructor
	~Vegetables(){
		std::cout<<"Destructor Called"<<std::endl;
	};
	
	//copy constructor
	Vegetables(const Vegetables &copyVegetables){
		productName = copyVegetables.productName;
		price = copyVegetables.price;
		quantity = copyVegetables.quantity;
	};
	
	//copy assignment
	Vegetables& operator=(const Vegetables &copyVegetables){
		if(this != &copyVegetables){
			productName = copyVegetables.productName;
			price = copyVegetables.price;
			quantity = copyVegetables.quantity;
		}
		return *this;
	};
	
	//display
	void display(){
		std::cout<<"\nVegetables: "<<productName<<std::endl;
		std::cout<<"Price: "<<price<<std::endl;
		std::cout<<"Quantity: "<<quantity<<std::endl;
		std::cout<<"Total: "<<calculateSum()<<std::endl;
	}
	
	double calculateSum(){
		return price * quantity;
	};

};

double totalSum(Fruits* fruits[], int fruitsCount, 
				Vegetables* vegetables[], int vegetableCount);

int main(){
	Fruits* apple = new Fruits("Apple",10,7);
	Fruits* banana = new Fruits("Banana",10,8);
	Vegetables* broccoli = new Vegetables("Broccoli",60,12);
	Vegetables* lettuce = new Vegetables("Lettuce",50,10);
	
	//grocery list
	Fruits* fruitList[2];
	Vegetables* vegetableList[2];
	
	fruitList[0] = apple;
	fruitList[1] = banana;
	vegetableList[0] = broccoli;
	vegetableList[1] = lettuce;
	
	//grocery list display
	std::cout<<"===Grocery List==="<<std::endl;
	
	for(int i=0; i < 2; i++){
		fruitList[i]->display();
	}
	
	for(int i=0; i < 2; i++){
		vegetableList[i]->display();
	}
	
	std::cout<<"\n";
	
	std::cout<< "Grand Total = PHP "<<totalSum(fruitList, 2, vegetableList, 2)<<std::endl;
	
	std::cout<<"\n";
	
	//delete lettuce
	std::cout<<"Deleting Lettuce From The List"<<std::endl;
	delete vegetableList[1];
	vegetableList[1] = NULL;
	
	//remaining
	for(int i=0; i < 2; i++){
		fruitList[i]->display();
	}
	
	if(vegetableList[0] != NULL){
		vegetableList[0]->display();
	}
	
	std::cout<<"\n";
	
	delete fruitList[0];
	delete fruitList[1];
	delete vegetableList[0];
	
	return 0;
}

double totalSum(Fruits* fruits[], int fruitsCount, Vegetables* vegetables[], int vegetablesCount){
	
	double total = 0;
	
	for(int i = 0; i < fruitsCount; i++){
		total += fruits[i]->calculateSum();
	}
	
	for(int i = 0; i < vegetablesCount; i++){
		total += vegetables[i]->calculateSum();
	}
	
	return total;
};



