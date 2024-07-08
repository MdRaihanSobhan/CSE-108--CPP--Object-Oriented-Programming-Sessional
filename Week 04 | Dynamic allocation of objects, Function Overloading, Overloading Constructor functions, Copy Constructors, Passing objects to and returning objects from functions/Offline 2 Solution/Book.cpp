#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

class Book{
	int isbn;
	char title[100];	
	int price;
	public:
		//Setter functions
		void setISBN(int isbn){this->isbn=isbn;}
		void setTitle(char* title){strcpy(this->title,title);}
		void setPrice(int price){this->price=price;}

		//Getter functions
		int getISBN(){return isbn;}
		char* getTitle(){return title;}
		int getPrice(){return price;}
		
		//Constructor functions
		Book(){ //default constructor
			isbn=0;
			strcpy(title,"");
			price=0;
		}
		Book(int isbn, char* title, int price){//constructor with parameters
			this->isbn=isbn;
			strcpy(this->title,title);
			this->price=price;			
		}
		Book(const Book& book){//Copy constructor
			// *this=book;
			this->isbn=book.isbn;
			this->price=book.price;
			strcpy(this->title,book.title);			
		}
		
		//destructor function
		~Book(){ 
			//delete[] title;
		}
			
		//Other functions
		void print(){
			if (isbn>0) cout  << "ISBN: "<< isbn <<", Title: " << title <<", Price: "<<price<<endl;
			else cout << "Values not yet set\n";
		}

		int isTheSameBook(Book b){
			if (this->isbn==b.isbn) return 1;
			else return 0;
		}

		Book generateNewEdition(int isbn, int price){
			Book temp(isbn,this->title,price);
			return temp;			
		}
};
