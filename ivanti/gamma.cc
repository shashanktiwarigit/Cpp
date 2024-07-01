#include <iostream>
using namespace std;

class Gamma {
	private:
	static int total;
	int id;
	public:
		Gamma(){++total; id = total;}
		~Gamma() { --total;
			cout << "destructor called "<< total<<endl;}
		static void showTotal(){
			cout <<total<<endl;
		}
		void showId(){
			cout << "get id "<<id <<endl;
		}
};
int Gamma::total = 0;

int main(){
	Gamma g1, g2;
	Gamma::showTotal();
	Gamma g3;
	Gamma::showTotal();
	g1.showId();
	g2.showId();
	g3.showId();
	return 0;
}
