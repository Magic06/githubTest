#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string username;//�˺�
	string password;//����

	cout << "�������˺�" << endl;
	cin >> username;
	cout << "����������" << endl;
	cin >> password;

	if (username == "magic007" && password == "123456") {//�ж��˺�����
		cout << "��վ404����" << endl;
		cout << "��վ�۸Ĺ���" << endl;
		cout << "��վ������¼" << endl;
		cout << "DNS����" << endl;
		cout << "��������������" << endl;
	}
	else {
		cout << "�˺Ż����������" << endl;
	}

	system("pause");
	return 0;
}