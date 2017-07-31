struct Date {    // representation
	int d, m, y;

	void init( int, int, int); // initialize d
	void add_year( int n); // add n years to d
	void add_month( int n); // add n months to d
	void add_day( int n); // add n days to d
};

void init_date(Date& d, int, int, int); // initialize d
void add_year(Date& d, int n); // add n years to d
void add_month(Date& d, int n); // add n months to d
void add_day(Date& d, int n); // add n days to d

// Because different structures can have member functions wiht the same name, we must
// specify the structuree name when definining a member function:

void Date::init(int dd, int mm, int yy)
{
	d = dd;
	m = mm;
	y = yy;
}

void Date::add_day(int n)
{
	// to do
}

Date my_birthday;

void f()
{
	Date today;

	today.init(16,20,1996);
	my_birthday.init(30,12,1950);

	Date tomorrow = today;
	tomorrow.add_day(1);
}


int main(int argc, char **argv)
{
	return 0;
}
