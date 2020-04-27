#include<iostream>
#include<string.h>
using namespace std;
int totalCopies;
class Book{
	private:
	int nbr;//Book Number
	string name;//Book name
	string author;//Book Author
	string publisher;//Book publisher
	float price;// Book Price
	//int totalCopies;// Number of copies Available
  	//int Issued;// Number of book issued
	public:
	int Issued;// Number of book issued
	void getData();
	void bookIssue();
	void bookReturn();
	void bookInfo();
};
	void Book::getData()
	{
		cout<<"Enter book number"<<"\n";
		cin>>nbr;
		cout<<"Enter book name, book author and book publisher"<<"\n";
		cin>>name>>author>>publisher;
		cout<<"Enter book price";
		cin>>price;
		
	}
	void Book::bookIssue()
	{	
		cout<<"total number of books avaialble"<<totalCopies<<"\n";
		cout<<"To issue a book press 1";
		int i;
		cin>>i;
		if(i==1){		
		totalCopies=-totalCopies;
		cout<<"Book Issued";
		}
		else
		cout<<"Book not issued";
	}
	void Book::bookReturn()
	{
		totalCopies=+totalCopies;
		cout<<"Book Returned";
	}
	void Book::bookInfo()
	{
		cout<<nbr<<"\n"<<name<<"\n"<<author<<"\n"<<publisher<<"\n";
		cout<<price<<"\n"<<totalCopies<<"\n";
	}
int main()
{
Book b;
b.getData();
cout<<"Enter total copies";
cin>>totalCopies;
cout<<"Press 1 for book issue ,Press 2 for book return, press 3 for book info";
int x;
cin>>x;
switch(x)
{
case 1: b.bookIssue();
        break;
case 2: b.bookReturn();
        break;
case 3: b.bookInfo();
        break;
default: cout<<"Wrong choice"<<"\n";
} 
cout<<"Total number of copies available"<<totalCopies;
return 0;
}
