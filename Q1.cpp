#include<iostream>
using namespace std;

class Book{
	string title;
	string author;
	float price;
public:
	Book (){
		title = "Unknown";
		author = "Unknown";
		price = 0.0;
	}
	Book (string t, string a, float p){
		title = t;
		author = a;
		price = p;
	}
	void display(){
		cout<<"Book Title: "<<title<<endl;
		cout<<"Book Author: "<<author<<endl;
		cout<<"Book Price: "<<price<<endl;
	}
};
int main(){
	Book b1;
	Book b2("Fast and Furious", "Wajeeh Hasan", 5000);
	b1.display();
	b2.display();
	return 0;
}
