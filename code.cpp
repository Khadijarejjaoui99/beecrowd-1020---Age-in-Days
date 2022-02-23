// Solution of 1020 - Age in Days in beecrowd
#include <iostream>

using namespace std;

int main ()
{
    int N, n;
    cin >> N;
    n = N%365;
    cout << N/365 <<" ano(s)" <<endl;
    cout<< n/30<<" mes(es)" <<endl;
    cout<< n%30 <<" dia(s)"<<endl;
    system("pause");
    return 0;
}