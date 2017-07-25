#include <memory>
#include <iostream>

using namespace std;

class X
{
public:
	void do_something()
	{
		return;
	};
private:
	int a_;
};

// X* vs. unique_ptr<X>
void f(int i, int j)
{
	X * p = new X; // Allocate a new X
	unique_ptr<X> sp {new X}; // Allocate a new X and give its pointer to unique_ptr
	if( i < 99) throw Z{};
	if( j < 77) return;
	p->do_something();
	sp->do_something();
	
	delete p;
}

int main(int argc, char **argv)
{
	return 0;
}
