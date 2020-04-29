#include <iostream> 
using namespace std; 

string one[] = { "", "one ", "two ", "three ", "four ", 
				"five ", "six ", "seven ", "eight ", 
				"nine ", "ten ", "eleven ", "twelve ", 
				"thirteen ", "fourteen ", "fifteen ", 
				"sixteen ", "seventeen ", "eighteen ", 
				"nineteen "
			}; 

string ten[] = { "", "", "twenty ", "thirty ", "forty ", 
				"fifty ", "sixty ", "seventy ", "eighty ", 
				"ninety "
			}; 

string numToWords(int n, string s) 
{ 
	string str = ""; 
	if (n > 19) 
		str += ten[n / 10] + one[n % 10]; 
	else
		str += one[n]; 

	if (n) 
		str += s; 

	return str; 
} 

string convertToWords(int n) 
{  
	string num;
	num=num + numToWords(((n / 100) % 10), "hundred "); 

	if (n > 100 && n % 100) 
		num=num +  "and "; 
	num=num +  numToWords((n % 100), ""); 

	return num; 
} 

int main() 
{ 
 
	int n;
		cout<<"Enter a number "<<"\n"; 
		cin>>n;
		if(n>=1000)
		cout<<"Number is out of range "<<n<<"\n";
		else
		{
			cout << convertToWords(n) << endl; 
		}
	

	return 0; 
} 

