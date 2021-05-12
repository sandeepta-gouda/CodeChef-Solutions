#include <iostream>
using namespace std;
#define ll long long int

int main() {
	ll test, X, A, B;
	cin >> test;
	while(test--){
	    cin>>X>>A>>B;
	    cout<<(A+((100-X)*B))*10<<endl;
	}
	return 0;

    //Sandeepta Gouda 
    //KIIT University
}