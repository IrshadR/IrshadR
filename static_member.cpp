#include<iostream>
#include<conio.h>
using namespace std;
class test
{
	static int count;
	int n;
	public:
		void getdata();
		void displaycount();
		static void showcount();
};
  int test::count;
  void test::getdata(){
    n=++count;
  }
  void test::displaycount(){
  	cout<<"code="<<n<<endl;
  }
  void test::showcount(){
  	cout<<"count="<<count<<endl;
  }
  int main()
  {
  	test t1,t2,t3,t4;
  	t1.getdata();
  	t2.getdata();
  	t3.getdata();
  	test::showcount();
  	t4.getdata();
  	test::showcount();
  	t1.displaycount();
  	t2.displaycount();
  	t3.displaycount();
    t4.displaycount();
    getch();
  	return 0;
  }
