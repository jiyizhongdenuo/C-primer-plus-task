#include<iostream>
#include<string>
#include<cctype>
#include<fstream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;
typedef vector<string> vec;
const int NUM = 26;
int main()
{
	ifstream fin("string.txt");
	vector<string> st;
	string temp;
	srand(time(0));
	while (fin)
	{
		fin >> temp;
		st.push_back(temp);
	}
	char play;
	cout << "Will you play a word game?";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target(st[rand() % NUM]);
		int length = target.size();
		string badchars;
		string attempt(length, '_');
		int guesses = 6;
		cout << "Guess my secret word. It has " << length << " letter, and you guess\n" << "one letter at a time. You get " << guesses << " wrong guesses.\n";
		cout << "Your word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;
			if (badchars.find(letter) != string::npos || attempt.find(letter) != string::npos)
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}
			int loc = target.find(letter);
			if (loc == string::npos)
			{
				cout << "bad guess.";
				guesses--;
				badchars += letter;
			}
			else
			{
				cout << "Good guess.\n";
				attempt[loc] = letter;
				loc = target.find(letter, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}
			cout << "Your word:" << attempt << endl;
			if (attempt != target)
			{
				if (badchars.size() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << "bad guesses left\n";
			}
		}
		if (guesses > 0)
			cout << "That's right.";
		else
			cout << "Sorry, the word is " << target << ".\n";
		cout << "Will you play another?";
		cin >> play;
		play = tolower(play);
	}
	cout << "bye";
	return 0;
}
