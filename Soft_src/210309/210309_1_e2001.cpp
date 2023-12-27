#include <iostream>


class port {
	union dr {
		unsigned char BYTE;
		struct {
			unsigned int B1 : 1;
			unsigned int B2 : 1;
			unsigned int B3 : 1;
			unsigned int B4 : 1;
			unsigned int B5 : 1;
			unsigned int B6 : 1;
			unsigned int B7 : 1;
		}BIT;
	};
public:
	dr DR;
	port() {
		this->DR.BYTE= 0;
	}
};

int main(void) {
	port PORTE();
	std::cout << PORTE.
	
}