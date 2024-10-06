#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include "GamblingGame.h"
#include "Player.h"
using namespace std;

GamblingGame::GamblingGame() {
	string name;

	cout << "***** ���� ������ �����մϴ�. *****" << endl;

	cout << "ù��° ���� �̸�>>";
	getline(cin, name);
	playerArr[0].setName(name);
	cout << "�ι�° ���� �̸�>>";
	getline(cin, name);
	playerArr[1].setName(name);
}

void GamblingGame::play() {
	bool end = true;
	srand((unsigned)time(0));
	while (end) {
		for (int i = 0; i < 2; i++) {
			cout << playerArr[i].getName() << ":";
			cin.get();
			int n1 = rand() % 3;
			int n2 = rand() % 3;
			int n3 = rand() % 3;
			if ((n1 == n2) && (n2 == n3)) {
				cout << "	" << n1 << "     " << n2 << "     " << n3;
				cout << "     " << playerArr[i].getName() << "�� �¸�!!";
				end = false;
				break;
			}
			else {
				cout << "	" << n1 << "     " << n2 << "     " << n3;
				cout << "     " << "�ƽ�����!" << endl;
			}
		}
	}
}