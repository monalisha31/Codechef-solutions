
#include <iostream>
using namespace std;

int main() {
    int t, a, b,i;
    
    std::cin>> t;
    if(t!=0){
        for(i=0;i<t;i++){
            std::cin>> a >> b;
            std::cout<< a+b << std::endl;;
        }
    }
	
	return 0;
}
