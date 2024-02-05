
// определение символической константы _UNICODE
#define _CRT_SECURE_NO_WARNINGS
#define _UNICODE
#include <iostream>
#include <tchar.h>// для макросов windows
using namespace std;

////4
//bool Vowel(_TCHAR ch) {
//	return (ch == L'\u0430' || ch == L'\u0435' || ch == L'\u0451' ||
//		ch == L'\u0438' || ch == L'\u043E' || ch == L'\u0443' || ch == L'\u044B' || ch == L'\u044D' || ch == L'\u044E' || ch == L'\u044F' ||
//		ch == L'\u0410' || ch == L'\u0415' || ch == L'\u0401' ||
//		ch == L'\u0418' || ch == L'\u041E' || ch == L'\u0423' || ch == L'\u042B' || ch == L'\u042D' || ch == L'\u042E' || ch == L'\u042F');
//}
//
//int CountRuss(_TCHAR buf[]) {
//	int counter = 0;
//
//	for (int i = 0; i < _tcslen(buf); i++) {
//		if (Vowel(buf[i])) {
//			counter++;
//		}
//	}
//
//	return counter;
//}

////5
//bool IsPalindrome(_TCHAR buf[]) {
//	int length = _tcslen(buf);
//	_TCHAR reversedBuf[15];
//
//	for (int i = 0; i < length; i++) {
//		reversedBuf[i] = buf[length - i - 1];
//	}
//
//	reversedBuf[length] = L'\0'; 
//
//	return _tcscmp(buf, reversedBuf) == 0;
//}

//6
//void DaleteCharacter(_TCHAR buf[]){
//	_TCHAR NewBuf[15];
//	int choice = 0;
//	int newBufIndex = 0;
//
//	wcout << L"Which character should I remove?: ";
//	wcin >> choice;
//
//	for (int i = 0; i < _tcslen(buf); i++) {
//		if (i != choice) {
//			NewBuf[newBufIndex] = buf[i];
//			newBufIndex++;
//		}
//	}
//
//	NewBuf[newBufIndex] = L'\0'; 
//
//	wcout << NewBuf << endl;	
//
//}

//7
//void DaleteCharacter(_TCHAR buf[]){
//	_TCHAR NewBuf[15];
//	_TCHAR character;
//	int newBufIndex = 0;
//
//	wcout << L"Which character should I remove?: ";
//	wcin >> character;
//
//	for (int i = 0; i < _tcslen(buf); i++) {
//		if (buf[i] != character) {
//			NewBuf[newBufIndex] = buf[i];
//			newBufIndex++;
//		}
//	}
//
//	NewBuf[newBufIndex] = L'\0'; 
//
//	wcout << NewBuf << endl;	
//
//}

//8
//void AddCharacter(_TCHAR buf[]) {
//	_TCHAR NewBuf[15];
//	_TCHAR character;
//	int position = 0;		
//	int newBufIndex = 0;	
//
//	wcout << L"What character do you want to add? ";
//	wcin >> character;
//	wcout << "To what position?";
//	cin >> position;
//
//	for (int i = 0; i < _tcslen(buf) + 1; i++) {
//		if (i < position) {
//			NewBuf[i] = buf[i];
//		}
//		else if (i == position) {
//			NewBuf[i] = character;
//		}
//		else if (i > position) {
//			NewBuf[i] = buf[i - 1];
//		}
//	}
//
//	NewBuf[_tcslen(buf) + 1] = L'\0';
//
//	wcout << NewBuf << endl;
//
//}

void main()
{
	setlocale(LC_ALL, "");
	//1.  Дана строка символов.Заменить в ней все пробелы на табуляции.
	/*_TCHAR Buf[15] = _TEXT("Hello world");

	for (int i = 0; i < _tcslen(Buf); i++) {		
		if(Buf[i] == ' ') {
			Buf[i] = '\t';	
		}
	}
	wcout << Buf;
	cout << endl;*/	

	//2.  Дана строка символов. Определить количество букв,		
	//цифр и остальных символов, присутствующих в строке.
	/*_TCHAR Buf[20] = _TEXT("Hello, 18world29!");
	
	int numbers = 0;
	int letters = 0;
	int other = 0;

	for (int i = 0; i < _tcslen(Buf); i++) {	
		if (Buf[i] >= _TEXT('0') && Buf[i] <= _TEXT('9')) {
			numbers++;
		}
		else if ((Buf[i] >= _TEXT('A') && Buf[i] <= _TEXT('Z')) || (Buf[i] >= _TEXT('a') && Buf[i] <= _TEXT('z'))) {
			letters++;
		}
		else {
			other++;
		}
	}


	wcout << "Numbers: " << numbers << endl;
	wcout << "Letters: " << letters << endl;
	wcout << "Other " << other << endl;*/

	//3 Посчитать количество слов в веденном предложении 

	/*_TCHAR Buf[15];
	int counter = 0;		
	wcout << "Enter text: ";
	wcin.getline(Buf, 15);

	for (int i = 0; i < _tcslen(Buf); i++) {	
		if((Buf[i] != ' ' && Buf[i+1] == ' ') || (Buf[i + 1] == '\0')) {
			counter++;	
		}
	}

	cout << "Number of words in a sentence: " << counter << endl;		

	*/

	//4 Написать функцию для подсчета гласных букв в веденном тексте 
	//_TCHAR Buf[100] = _TEXT("Привет наш чудесный мир");
	//int vowelsCount = CountRuss(Buf);
	//wcout << Buf << endl;		
	//wcout << "letters: " << vowelsCount << endl;

	//5 дана строка прверить являетлся ли строка палиндромом
	/*_TCHAR Buf[15] = _TEXT("nun");

	if (IsPalindrome(Buf)) {
		wcout << Buf << _TEXT(" is a palindrome.") << endl;
	}
	else {
		wcout << Buf << _TEXT(" is not a palindrome.") << endl;	
	}*/

	//6 Написать функцию которая удалает из строки символ с зданным номером
	/*_TCHAR Buf[15];
	wcout << "Enter text: ";
	wcin.getline(Buf, 15);
	wcout << Buf << endl;	
	DaleteCharacter(Buf);	*/

	//7 Написать функцию которая удалает из строки все вхождения в неё заданного симовла
	/*_TCHAR Buf[15];
	wcout << "Enter text: ";
	wcin.getline(Buf, 15);
	wcout << Buf << endl;
	DaleteCharacter(Buf);*/

	//8 Написать функцию, которая вставляет встроку введё1нный символ в указанную позиуию
	/*_TCHAR Buf[15];
	wcout << "Enter text: ";
	wcin.getline(Buf, 15);
	wcout << Buf << endl;
	AddCharacter(Buf);*/



	system("pause");
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
