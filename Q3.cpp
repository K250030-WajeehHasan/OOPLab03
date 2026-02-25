#include<iostream>
using namespace std;

class Car{
private:
	string model;
	int year;
	double mileage;	
public:
	Car(string model, int year, double mileage){
		this ->model=model;
		this->year=year;
		this->mileage=mileage;
	}
	void updateMileage(double mileage){
		this->mileage+=mileage;
	}
	void display(){
		cout<<"Model: "<<this->model<<endl;
		cout<<"Year: "<<this->year<<endl;
		cout<<"Mileage: "<<this->mileage<<endl;
	}
};
int main(){
	Car c("Honda", 2007, 25000);
	cout<<"Before Update: "<<endl;
	c.display();
	c.updateMileage(4000);
	cout<<"After Update: "<<endl;
	c.display();
	return 0;
}
