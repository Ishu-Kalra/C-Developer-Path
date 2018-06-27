
#include <iostream>
using namespace std;

void addfive(int a, int b)
{
	cout<<"entering addfive function"<<endl;
	cout<<"a and b before adding 5: a="<<a<<" b="<<b<<endl<<endl;
	a += 5;
	b += 5;
	cout<<"a and b after adding 5: a="<<a<<" b="<<b<<endl;
	cout<<"leaving addfive function"<<endl<<endl;
}
int main()
{
	int a = 10, b = 15;
	cout<<"a and b before calling addfive function: a="<<a<<" b="<<b<<endl<<endl;

	addfive(a,b);

	cout<<"a and b after calling addfive function: a="<<a<<" b="<<b<<endl;
	return 0;


}
