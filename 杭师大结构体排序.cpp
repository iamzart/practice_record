#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct people
{
    string name;
    int date;
    int time;
    int ddl()
    {
        return date + time;
    }
};
bool cmp(people p1,people p2)
{
    if (p1.ddl() != p2.ddl())
        return p1.ddl() < p2.ddl();
    else if (p1.date != p2.date)
        return p1.date < p2.date;
    else
        return p1.name < p2.name;
}
int main()
{
    int n;
    cin >> n;
    vector<people>p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].name >> p[i].date >> p[i].time;
    }
    sort(p.begin(),p.end(), cmp);
    cout << p[0].name << endl;
    return 0;
}

