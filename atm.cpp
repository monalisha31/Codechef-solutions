#include <iostream>
using namespace std;

int main() {
    int x;
	float y,result;
	std::cin >> x >>y;
	if(x>0 && x<=2000 && y>0 && y<=2000.00)
	{
	    if((x%5)==0 && (x+0.50)<=y){
	        result = y-x-0.50;
	        std::cout << result << std::endl;
	    }
	    else{
	        cout<<y;
	    }
	}
	else{
	    cout<<y;
	}
	
	return 0;
}
