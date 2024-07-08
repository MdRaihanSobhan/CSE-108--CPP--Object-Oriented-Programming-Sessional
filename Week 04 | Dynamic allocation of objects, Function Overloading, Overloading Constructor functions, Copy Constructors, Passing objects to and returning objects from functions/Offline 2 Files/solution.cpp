/************Topics of Demonstration********************/
/* => Dynamic Allocation of objects         		   */
/* => Constructor overloading		        		   */
/* => Copy constructor				        		   */
/* => Passing and returning objects from functions     */
/*******************************************************/

#include<iostream>
#include<cstring>
#include<cmath>
#include "Book.cpp"

using namespace std;

class BookShop{
	char name[100];
	Book* books; //List of books in the shop
	int size;  //maximum number of books the shop can keep
	int count; //tracks currently how many numbers in the shop
	public:
		void setName(char* name){strcpy(this->name,name);}
		
		BookShop(){//Default constructor
		/*Initialize with size 5 and title NONAME*/
			books=new Book[5];
			size=5;
			count=0;
			strcpy(this->name,"");
		}
		
		BookShop(char* name, int size){//Parameterized constructor
		/*Initialize with the given title and size*/
			books=new Book[size];
			this->size=size;
			count=0;
			strcpy(this->name,name);
		}
		
		BookShop(const BookShop& bs){//Copy constructor
		/*Write necessary code for the copy constructor*/
			this->size=bs.size;
			strcpy(this->name,bs.name);
			books=new Book[size];
			for(int i=0;i<bs.count;i++){
				addBook(bs.books[i]);
			}
		}
		
		~BookShop(){//Destructor
		/*Free memory as applicable*/		
			delete [] books;
		}
			
		void addBook(Book b){
		/*Add book to the end of the bookshop list*/
			if (count<size){			
				books[count].setISBN(b.getISBN());
				books[count].setPrice(b.getPrice());
				books[count].setTitle(b.getTitle());
				count++;
			}
		}
		
		void addBook(Book* ba, int count){			
		/*Add the give array of books to the end of the bookshop list*/
			if (this->count+count<this->size){
				for (int i=0;i<count;i++){
					addBook(ba[i]);
				}
			}
		}

		Book getBookInfo(char* title){
		/*Return the **first** book that has the given title. Assume there is atleast one book in the list with the given title*/			
			Book temp;
			for (int i=0;i<count;i++){
				if (strcmp(books[i].getTitle(),title)==0) return books[i];
			}
			return temp;
		}
		
		void updateBookPrice(int isbn, int price){			
		/*Update the price of the book with given isbn to the given price*/
			for (int i=0;i<count;i++){
				if (books[i].getISBN()==isbn) books[i].setPrice(price);
			}
		}
		
		void removeBook(int isbn){
		/*Remove the book with the given isbn from the bookshop list. After removing a book all the books below the removed book will be shifted up; there will be no hole in the list*/			
			for (int i=0;i<count;i++){
				if (books[i].getISBN()==isbn){
					int oldCount=count;
					count=i;
					for (int j=i+1;j<oldCount;j++){
						addBook(books[j]);
					}
					break;
				}
			}
		}
				
		int totalPrice(){
		/*Return the total of the prices of all the books in the bookshop*/
			int totalPrice=0;
			for (int i=0; i<count;i++){
				totalPrice+=books[i].getPrice();
			}
			return totalPrice;
		}		
		
		void print(){
		/*Print the bookshop's name followed by information of all the books in the bookshop*/
			cout<<"Bookshop Name: "<<name<<endl;
			for (int i=0;i<count;i++){
				books[i].print();
			}
		}

		BookShop mergeShop(BookShop b){
		/* Return a new bookshop object that will contain all the books of this bookshop and the given bookshop b*/ 			/* Use the title **MergedShop** of the new bookshop														*/	
			BookShop temp("Merged Shop",this->count+b.count);
			for (int i=0;i<this->count;i++) temp.addBook(this->books[i]);
			for (int j=0;j<b.count;j++)temp.addBook(b.books[j]);
			return temp;
		}
};

int main(){
	BookShop bs1;
		bs1.setName("Boimela");
		Book b1(101,"Teach Yourself C++",100);
		Book b2(102,"Teach Yourself C",200);
		Book b3(103,"Java For Dummies",300);
		bs1.addBook(b1);
		bs1.addBook(b2);
		bs1.addBook(b3);
		bs1.print(); /*Output: 
						Bookshop Name: Boimela
						ISBN: 101, Title: Teach Yourself C++, Edition: 100
						ISBN: 102, Title: Teach Yourself C, Edition: 200							
						ISBN: 103, Title: Java For Dummies, Edition: 300
					 */		
		cout<<endl;
		cout<<"Total price of books: "<<bs1.totalPrice()<<endl;	/*Output: 
																   Total price of books: 600
																*/		
	
		cout<<endl;
		bs1.removeBook(102);
		bs1.print(); /*Output: 
						Bookshop Name: Boimela
						ISBN: 101, Title: Teach Yourself C++, Edition: 100
						ISBN: 103, Title: Java For Dummies, Edition: 300
					 */
	
		cout<<endl;
		bs1.updateBookPrice(101,500);
		bs1.print(); /*Output: 
						Bookshop Name: Boimela
						ISBN: 101, Title: Teach Yourself C++, Edition: 500
						ISBN: 103, Title: Java For Dummies, Edition: 300
					 */
		
		cout<<endl;
		Book jfd=bs1.getBookInfo("Java For Dummies");
		jfd.print();  /*Output: 
						 ISBN: 103, Title: Java For Dummies, Edition: 300
					 */
		
		cout<<endl;
		Book ba[3]={Book(201,"Operating Systems",1000),Book(202,"Compilers",2000),Book(203,"Computer Networks",1500)};
		BookShop bs2("Puthighor",5);
		bs2.addBook(ba,3);
		bs2.print();  /*Output: 
						 Bookshop Name: Puthighor
						 ISBN: 201, Title: Operating Systems, Edition: 1000
						 ISBN: 202, Title: Compilers, Edition: 2000
						 ISBN: 203, Title: Computer Networks, Edition: 1500
					 */	
	
		cout<<endl;
		BookShop bs3=bs1.mergeShop(bs2);
		bs3.setName("Mullick Brothers");
		bs3.print(); /*Output: 
						Bookshop Name: Mullick Brothers
						ISBN: 101, Title: Teach Yourself C++, Edition: 500
						ISBN: 103, Title: Java For Dummies, Edition: 300
						ISBN: 201, Title: Operating Systems, Edition: 1000
						ISBN: 202, Title: Compilers, Edition: 2000
						ISBN: 203, Title: Computer Networks, Edition: 1500
					 */		
}