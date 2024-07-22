//#include<iostream>
//#include<fstream>
//#include<string>
//#include<map>
//
//using namespace std;
//
//typedef map<string, int>StrIntMap;
//
//struct MyStruct
//{
//	string *Word;
//	int *Count;
//
//};
//void CountNoofWords(istream & in , StrIntMap & word)
//{
//	string text;
//	while (in >> text)
//	{
//		++word[text];
//	}
//}
//
//void Freq(istream& in, MyStruct& Mp)
//{
//	string text;
//	while (in >> text)
//	{
//		Mp.Word[text];
//	}
//}
//
//
//int main()
//{
//	ifstream in("Input.txt");
//	StrIntMap Words;
//	CountNoofWords(in, Words);
//
//	for (StrIntMap::iterator it = Words.begin(); it != Words.end(); ++it)
//	{
//		cout << it->first << " occurred " << it->second << endl;
//	}
//}
