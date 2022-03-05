#include<iostream>
using namespace std;

bool fun1(int a);

int main()
{
	int a = 0;
	bool judge;
	cout << "请输入一个1到100的数：" << endl;
	cin >> a;

	judge = fun1(a);
	if (judge == 1) {
		cout << "Yes!" << endl;
	}
	else{
		cout << "No!" << endl;
	}
}
bool fun1(int a)
{
	if (a == 2) {
		return true;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
			break;
		}
	}
	return true;
}