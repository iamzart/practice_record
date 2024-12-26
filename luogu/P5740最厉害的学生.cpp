#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
const int N = 1010;
using namespace std;
struct STU
{
	string name;
	int chi;
	int math;
	int eng;
	int id;
	int total()
	{
		return chi + math + eng;
	}
}stu[N];
bool cmp(STU stu1, STU stu2)
{
	if (stu1.total() != stu2.total())
		return stu1.total() > stu2.total();
	else
		return stu1.id < stu2.id;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i<n;i++)//n-1
	{
		cin >> stu[i].name >> stu[i].chi >> stu[i].math >> stu[i].eng;
		int score = stu[i].total();
		stu[i].id = i;
	}
	sort(stu, stu + n, cmp);
	cout << stu[0].name<<" "<<stu[0].chi<<" "<<stu[0].math<<" "<<stu[0].eng<<endl;
	return 0;
}