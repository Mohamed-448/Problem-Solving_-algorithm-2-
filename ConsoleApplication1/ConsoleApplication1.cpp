// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <cstdlib>

/*struct strinfo
{
	string fristname;
	string lastname;
	string father;
	string reacourd;
};

strinfo readinfo()
{
	strinfo info;
	cout << "please enter frist name";
	cin >> info.fristname;
	cout << "please enter last name";
	cin >> info.lastname;
	cout << "please enter father name";
	cin >> info.father;
	cout << "please enter recuard";
	cin >> info.reacourd;
	return info;
}



string getfullname(strinfo info)
{
	string fullname;
	string recordd;
	fullname = info.fristname + " " + info.father + " " + info.lastname;
	recordd = info.reacourd;
	return fullname;
}

void print(string fullname)
{
	cout << fullname;

	
}


*/

/*void readnum(int& num1, int& num2, int& num3)
{
	
	cout << "please enter num1";
	cin >> num1;
	cout << "please enter num2";
	cin >> num2;
	cout << "please enter num3";
	cin >> num3;

}

int fffr(int& num1, int& num2, int& num3)
{
	return num1 + num2 + num3;
}

int gty(int& num1, int& num2, int& num3)
{
	
	return (float)fffr(num1, num2, num3)/3;

}

void print(int& num1, int& num2, int& num3)
{
	cout << (gty(num1, num2, num3));
}
*/

/*struct MyStruct
{
	int Pennies, Nickless, Dimes, Quarters, Dollars;
};

MyStruct ReadPigy()
{
	MyStruct Pigy;
	cout << "please enter Pennies" << endl;
	cin >> Pigy.Pennies;
	cout << "please enter Nickless" << endl;
	cin >> Pigy.Nickless;
	cout << "please enter Dimes" << endl;
	cin >> Pigy.Dimes;
	cout << "please enter Quarters" << endl;
	cin >> Pigy.Quarters;
	cout << "please enter Dollars" << endl;
	cin >> Pigy.Dollars;

	return Pigy;

}

int Calculet(MyStruct Pigy)
{
	int Total=0;
	Total = Pigy.Pennies * 1 + Pigy.Nickless * 5 + Pigy.Dimes * 10 + Pigy.Quarters * 25 + Pigy.Dollars * 100;
	return Total;
}

int Total = Calculet(ReadPigy());

	cout << endl << "Total penies =" << Total << endl;
	cout << endl << "Total dolars =" << (float)Total/100 << endl;
*/

/*
enum enPrimeNotePrime
{
	prime = 1, notprime = 2
};



float Read(string Message)
{


	float Number = 0;

	do
	{
		cout << Message;
		cin >> Number;

	} while (Number<=0);
	return Number;
}

enPrimeNotePrime Check(int Number)

{
	
	
	int m = round(Number / 2);
	for (int counter = 2; counter <= m; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotePrime::notprime;
		
	}
	return enPrimeNotePrime::prime;
}



/*void Print(int Number)
{
	switch (Check(Number))
	{
	case enPrimeNotePrime::prime:
		cout << "the number is prime";
		break;
	case enPrimeNotePrime::notprime:
		cout << "the number is not prime";
		break;

	}
}
*/




/*void PPPP(int Number)
{
	cout << 1 << Number;

	for (int i = 1; i <=Number; i++)
	{
		if (Check(i)==enPrimeNotePrime::prime)
		{
			cout << i << endl;
		}
	}

}
PPPP(Read("please ener Number"));

*/
/*
int ReadPositiveNumber(string Message)
{ int Number = 0;
do { cout << Message << endl;   
cin >> Number; }
while
(Number <= 0); return Number; }


bool isPerfectNumber(int Number)
{ int Sum = 0;
for (int i = 1; i < Number; i++)
{ if (Number % i == 0) 
Sum += i; }
return Number == Sum;
} 

void PrintResults(int Number)
{ if (isPerfectNumber(Number))  

cout << Number << " Is Perfect Number.\n";
else   
cout << Number << " Is NOT Perfect Number.\n"; }


void Prent2(int Number)
{

	

	for (int i = 1; i < Number; i++)
	{
		if (isPerfectNumber(i))
		{
			cout << i<<endl;
		}
	}

}

Prent2(ReadPositiveNumber("Please enter a positive number?"));
return 0;
*/

/*
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while
		(Number <= 0); return Number;
}

void Remaind(int Number)
{
	int count = 0;
	int rem =0 ;
	while (Number>0)
	{
		rem = Number % 10;
		Number = Number / 10;
		count = count + rem;	
		
		cout << count << endl;


		
	}
}
Remaind(ReadPositiveNumber("enter number"));
*/

/*
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while
		(Number <= 0); return Number;
}


int Remaind(int Number)
{
	int Nmber2 = 0, rem = 0;
	
	while (Number > 0)
	{
		rem = Number % 10;
		Number = Number / 10;
		

		Nmber2 = Nmber2 * 10 + rem;


	}
	return Nmber2;
}

cout<<Remaind(ReadPositiveNumber("enter number"));

*/

/*
void Char(int Number)

{
	int m = Number + 64;

	for (int i = m; i >= 65; i--)
	{

		for (int j = 65; j <= m; j++)
		{

			cout << char(i) << " ";

		}
		cout << endl;




	}
}
*/

/*
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while
		(Number <= 0); return Number;
}

void Char(int Number)

{
	
	
	for (int i =65 ; i <= 65 + Number - 1; i++)
	{

		for (int j = 1; j <= Number-(65+Number-1-i); j++)
		{

			cout << char(i) << " ";

		}
		cout << endl;
		



	}
}


 Char(ReadPositiveNumber("enter number"));


*/
/*
string Password()
{
	string small = "";
	cout << "please enter password";
	cin >> small;
return small;

}


string LLL(string small)
{
	string word = "";
	
	int Trail=0;
	
	for (int i = 65; i <= 90; i++)
	{
		
		for (int j = 65; j <= 90; j++)
		{
			
			for (int x = 65; x <= 90; x++)
			{

				word = word + (char(i));
				word = word + (char(j));
				word = word + (char(x));
				Trail++;
				cout << "Trial [" << Trail << "] : ";
				

				cout <<  word;

				cout << endl;

				if (small==word)
				{
					
					cout << Trail << endl;
					

					
					return small;

				}
				else
				{
					"NNottt";
				}
				
				

				word = "";

			}
			
		}
		

	}
	

	
}

cout << LLL(Password());
*/

/*
int RandomNumber(int From , int To)
{


int randNum = rand() % (To - From + 1) + From;
return randNum;
}
*/




/*


*/
/*
enum MyEnum
{
	smallLater = 1, CapitalLater = 2, spicalCracter = 3, Digit = 4
};

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

char GetRandomCracter(MyEnum CharTybe)
{
	switch (CharTybe)

	{
	case MyEnum::smallLater:
	{	return char(RandomNumber(97, 122));

	break;

	}

	{
	case MyEnum::CapitalLater:
		return char(RandomNumber(65, 90));
		break;
	}
	{
	case MyEnum::Digit:
		return char(RandomNumber(48, 57));
		break;
	}
	case MyEnum::spicalCracter:
	return char(RandomNumber(33, 47));
	break;
	}
}

int ReadNumber(string Meassge)
{
	int Number = 0;
	cout << "please enter Number" << endl;
	cin >> Number;
	return Number;
}

string GenaretWord(MyEnum CharTybe,short Length)
{
	string Word ;
	for (int i = 1; i < Length; i++)
	{
		Word = Word + GetRandomCracter(CharTybe);
	}
	return Word;
}

string Key()
{
	string Key= "";
	Key = GenaretWord(MyEnum::CapitalLater, 4) + "-";
	Key =Key + GenaretWord(MyEnum::CapitalLater, 4) + "-";
	Key =Key + GenaretWord(MyEnum::CapitalLater, 4) + "-";
	Key =Key + GenaretWord(MyEnum::CapitalLater, 4) ;
	return Key;

}

void GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys ; i++)
	{
		cout << "Key [" << i << "] : ";
		cout << GenerateKeys<<endl;
	}
}

GenerateKeys(ReadNumber("REad postive number"));

*/
/*
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}

int ReadNumber()
{
	int Number = 0;
	cout << "please enter Number" << endl;
	cin >> Number;
	return Number;
}

void Enter(int Num)
{

	for (int i = 1; i <= Num; i++)
	{
		cout << i << endl;
		for (int j = 1; j <= 4; j++)
		{
			for (int x = 1; x <= 4; x++)
			{
				cout << char(RandomNumber(65, 90));
			}
			if (j == 4)
			{
				continue;
			}
			cout << "-";

		}
		cout << endl;
	}
}
Enter(ReadNumber());
*/





/*
void Readarr(int arr[100],int& arrLength)
{


	cout << "number of element" << endl;
	cin >> arrLength;
	cout << "enter arr element" << endl;
	for (int i = 0; i < arrLength; i++)
	{
		cout << "elemnt[" << i + 1 << "] :";
		cin >> arr[i];
	}
	cout << endl;
	
}

void printarr(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
		

		cout << "\n";
	}
	
}

int arr[100], arrLength;

Readarr(arr, arrLength);


printarr(arr, arrLength);

*/
/*
int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;

	return randNum;
}


void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{


	cout << "number of element" << endl;
	cin >> arrLength;
	
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
	cout << endl;

}

void printarr(int arr[100], int arrLength)
{
	
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
		
	
	}	


	
}
void copy(int arrS[100], int arrD[100], int arrLength)
{
	
	for (int i = 0; i <arrLength; i++)
	
		arrD[i] = arrS[i];
	  
	    
	
	srand((unsigned)time(NULL));


	int arr[100], arrLength;

	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];
	copy(arr, arr2, arrLength);


	cout << "\nArray Elements: " << endl;
	
	printarr(arr, arrLength) ;

	cout << "\nArray Elements 2: " << endl;

	printarr(arr2, arrLength);


	
	return 0;
}


*/

int main()
{
	int number;

	for (int i = 1; i < number; i++)
	{
		for (int j = 1; j < i; j++)
		{
			
			cout << i * j;


		}

		
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
