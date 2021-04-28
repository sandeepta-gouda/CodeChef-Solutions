#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--){
     
     string s;
     cin >> s;
     
     int a[26]={0};
     int b[26]={0};
     
     
     for(int i=0;i<s.length()/2;i++){
        char x=s[i];
        int temp=(int)x;
        int temp2 = temp-97;
        a[temp2]++;
     }
     
     int check=0;
     
     if(s.length()%2==0){
     
     for (int i=s.length()-1 ; i>=s.length()/2 ; i--){
          char x=s[i];
        int temp=x;
        int temp2 = temp-97;
        b[temp2]++;
     }
     }else{
     for (int i=s.length()-1 ; i>s.length()/2 ; i--){
          char x=s[i];
        int temp=x;
        int temp2 = temp-97;
        b[temp2]++;
     }
    
     }
     
     
     for(int i=0;i<26;i++){
         if(a[i]!=b[i]){
                 check++;   
         }
     }
     
     if(check==0){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
     
	}
	
	return 0;
}
