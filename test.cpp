#include <iostream>
using std::cout;

class test1{
	public:
		int	var1;
		test1(){var1 = 3; cout << "Test1 constructor \n";}
		test1(int num) {var1 = num;}
};

class test2 : public test1 {
	public:
		test2() {}
		test2(int num) {};
		int var2;
};


int main(void)
{
	test2 obj;
	cout << obj.var1 << '\n';
}