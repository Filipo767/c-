#include <iostream>

using namespace std;

int silnia(int x)
{
	if(x==0)
	return 1;
	return silnia(x-1)*x;
	
	
}

int main(int argc, char** argv) {
int x;
cin>>x;
	cout<<silnia(x);




	return 0;
}
