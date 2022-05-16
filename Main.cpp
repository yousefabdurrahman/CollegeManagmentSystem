#include<iostream>
#include<fstream>
using namespace std;
int main() {
	fstream Gst1;
	Gst1.open("Gst1.txt", ios::in | ios::ate | ios::out);
	while (!Gst1.fail())
	{
		Gst1 << "opend successfully" << endl;
		Gst1.close();
	}
}