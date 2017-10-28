#include <iostream>
#include <vector>

using namespace std;



int main(int argc, char *argv[]) {
	
	
	
	vector<int> v={1,10,5,3,9,4};
	
	int max=v.front();
	
	
	for(auto &a: v){
		if(a>max){
			max=a;
		}
	}
	
	cout<< max<<endl;
}