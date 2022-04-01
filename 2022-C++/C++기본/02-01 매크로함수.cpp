#include <iostream>
using namespace std;

#define jegop(A) ((A) * (A))

int main(void)
{
	cout << jegop(3+1) << endl;		//4*4와 같음
	cout << (3+1) * (3+1) << endl;	// 위와 같음
}