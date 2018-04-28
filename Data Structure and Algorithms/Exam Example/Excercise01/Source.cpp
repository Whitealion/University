#include "HTTP_Client.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	HTTP_Client client1("https://www.bla.com", 443);

	cout << client1.get_url() << " (port " << client1.get_port() << "):\n"
		<< client1.post() << endl;

	return 0;
}