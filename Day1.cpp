#include<iostream>
#include<string.h>
using namespace std;

class Book{
	private:
	int totalCopies;
	int nbr;//Book Number
	string name;//Book name
	string author;//Book Author
	string publisher;//Book publisher
	float price;// Book Price
	int issued=0;//Book issued
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
		int q;
		cout<<"Enter total copies";
		cin>>q;
		totalCopies==q;
		cout<<"Enter details for next book"<<endl;
		
	}
	void Book::bookIssue()
	{	
		cout<<"total number of books avaialble"<<totalCopies<<"\n";
		cout<<"To issue a book press 1";
		int i;
		cin>>i;
		if(i==1){
		if(totalCopies>0){
		totalCopies=-totalCopies;
		cout<<"Book Issued: "<<issued++;
		}
		}
		else
		cout<<"Book not issued";
	}
	void Book::bookReturn()
	{
		if(issued<totalCopies){
		totalCopies=+totalCopies;
		issued--;
		cout<<"Book Returned";
		}
	}
	void Book::bookInfo()
	{
		cout<<nbr<<"\n"<<name<<"\n"<<author<<"\n"<<publisher<<"\n";
		cout<<price<<"\n"<<totalCopies<<"\n";
	}
int main()
{
int l;
cout<<"Enter the number to different types of books available "<<"\n";
cin>>l;
Book b[l];
for(int i=0;i<l;i++)
{
b[i].getData();
}
cout<<"Press 1 for book issue ,Press 2 for book return, press 3 for book info";
int x;
for(int i=0;i<l;i++)
{
cin>>x;
switch(x)
{
case 1: b[i].bookIssue();
        break;
case 2: b[i].bookReturn();
        break;
case 3: b[i].bookInfo();
        break;
default: cout<<"Wrong choice"<<"\n";
}
} 
return 0;
}
