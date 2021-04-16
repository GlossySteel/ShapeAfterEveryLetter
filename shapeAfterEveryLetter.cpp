// cPlusPlusTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <string>
#include <array>

using namespace std;

string splitText(string, string);

int main()
{
	string text;
	string keyword;

	cout << "Enter some text: \n";
	getline(cin, text);

	cout << "Enter a keyword:\n";
	getline(cin, keyword);

	cout << "\n";

	cout << splitText(text, keyword);
}

string splitText(string user_text, string user_keyword) {

	string split_user_text = user_keyword;

	for (int i = 0; i < user_text.length(); i++)
	{
		split_user_text += user_text[i] + user_keyword;

	}
	return split_user_text;
}