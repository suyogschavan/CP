#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int tc;
    std::cin >> tc;
    while(tc--){
        float u,v,a,s;
        std::cin >> u >> v >> a >> s;
        float sum = sqrt((u*u) - (2*a*s));
        if(v < sum){
            std::cout << "No" << std::endl;
        }
        else{
            std::cout << "Yes" << std::endl;
        }
    }
	return 0;
}