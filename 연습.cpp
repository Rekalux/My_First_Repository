#include <string>
#include <iostream>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	cout<<b+b+a;
	string c=b.append(a);
	cout<<c;
	return 0;
}
