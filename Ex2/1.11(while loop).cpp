#include <iostream>
int main(){
	std::cout << "enter two integer" << std::endl;
	int v1 = 0 , v2 = 0;
	std::cin >> v1 >> v2;
	if (v1 == v2 || v1+1==v2||v2+1 == v1){
	    std::cout << "there is no integer in between these two numbers."<< std::endl;
	}
	while (v2+1 < v1) {
	    v2 += 1;
	    std::cout << v2;
	}
	while (v1+1 < v2) {
	    v1 += 1;
	    std::cout << v1;
	}
	return 0;
}
