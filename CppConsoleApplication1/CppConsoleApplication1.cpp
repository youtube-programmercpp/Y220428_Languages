#include <Windows.h>
#include <sstream>
class Test {
public:
	int test_data;//メンバ変数
};
int main()
{
	Test x;
	Test& y = x;
	x.test_data = 100;
	y.test_data = 200;
}
