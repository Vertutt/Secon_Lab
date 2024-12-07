#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");//ñìåíà ëîêàëèçàöèè êëàâèàòóðû
	unsigned int p = 0;
	unsigned int N = 0;
	string TransformedN = "";
	cout << "Ââåäèòå îñíîâàíèå ñèñòåìû ñ÷èñëåíèÿ îò 2 äî 16 ";
	cin >> p;
	while (p < 2 || p > 16)
	{
		cout << "Ââåäèòå îñíîâàíèå ñèñòåìû ñ÷èñëåíèÿ îò 2 äî 16 ";
		cin >> p;
	}
	cout << "\nÂâåäèòå Öåëîå ïîëîæèòåëüíîå ÷èñëî ";
	cin >> N;
	while (N <= 0)
	{
		cout << "\nÂâåäèòå Öåëîå ïîëîæèòåëüíîå ÷èñëî ";
		cin >> N;
	}
	while (N > 0)//Построение числа
	{
		TransformedN = (N % p < 10) ? to_string(N % p) + TransformedN : char('A' + N % p - 10) + TransformedN;//строим числа в зависимости от их системы счисления
		N /= p;
	}
	cout << TransformedN << "A new code wow";
} 
