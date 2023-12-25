#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {
	string username;//ÕËºÅ
	string password;//ÃÜÂë

	cout << "ÇëÊäÈëÕËºÅ" << endl;
	cin >> username;
	cout << "ÇëÊäÈëÃÜÂë" << endl;
	cin >> password;

	if (username == "magic007" && password == "123456") {//ÅĞ¶ÏÕËºÅÃÜÂë
		cout << "ÍøÕ¾404¹¥»÷" << endl;
		cout << "ÍøÕ¾´Û¸Ä¹¥»÷" << endl;
		cout << "ÍøÕ¾¹¥»÷¼ÇÂ¼" << endl;
		cout << "DNS¹¥»÷" << endl;
		cout << "·şÎñÆ÷ÖØÆô¹¥»÷" << endl;
	}
	else {
		cout << "ÕËºÅ»òÕßÃÜÂë´íÎó" << endl;
	}

	system("pause");
	return 0;
}